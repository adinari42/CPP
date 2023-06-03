// #include "Span.hpp"



bool isNumeric(const std::string& str)
{
    if (str.empty())
        return false;
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
		if ((*it < '0' || *it > '9') && *it != '-' && *it != '.')
		return false;
    }
    return true;
}

int checkDaysOfMonth(std::vector<std::string> inptDateArr)
{
    int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year = static_cast<int>(strtol(inptDateArr[0].c_str(), NULL, 10));
    int month = static_cast<int>(strtol(inptDateArr[1].c_str(), NULL, 10));
    int day = static_cast<int>(strtol(inptDateArr[2].c_str(), NULL, 10));

	std::string::iterator it = inptDateArr[2].end();
	inptDateArr[2].erase(inptDateArr[2].end() - 1, it);
	if (!isNumeric(inptDateArr[0]) || !isNumeric(inptDateArr[1]) || !isNumeric(inptDateArr[2]))
        return 1;
    if (month > 12 || month < 1 || day > arr[month - 1] || day < 1)
        return 1;
    if (month == 2 && ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))))
    {
        if (day > arr[month - 1] + 1)
            return 1;
    }
    return 0;
}

std::vector<std::string> split_str(std::string str, char delim)
{
	std::vector<std::string> row;
	std::string word;
	std::stringstream s(str);
	while (std::getline(s, word, delim)) {
		row.push_back(word);
	}
	return row;
}

class LargeNumber : public std::exception {
	const char* what() const throw() {
		return "ERROR: too large a number.";
	}
};

class NotPositiveNumber : public std::exception {
	const char* what() const throw() {
		return "ERROR: not a positive number.";
	}
};

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Error: Incorrect number of arguments" << std::endl;
		return 1;
	}
	int count = 0;
    std::ifstream inptData(argv[1]);//open input file
	std::string inptLine;
	std::getline(inptData, inptLine);//skip first line
	while(std::getline(inptData, inptLine))//as long as we read lines from input file
	{
		std::string line, word, temp;
		std::vector<std::string> lineArr = split_str(inptLine, '|');//split input using |
		std::ifstream csvFile("data.csv");//open data.csv
		std::string date = lineArr[0];//saving date string of input
		std::vector<std::string> inptDateArr = split_str(date, '-');//splitting input file date
		
		count = 0;
		std::string lastRes = date;//
		std::getline(csvFile, line);//skipping first line of csv file
		while (std::getline(csvFile, line)) {//as long as we read lines from csvFile
			std::vector<std::string> tmpArr = split_str(line, ',');//splitting csv line
			std::string csvDateStr = tmpArr[0];//saving exchange csv date

			std::vector<std::string> csvDateArr =  split_str(csvDateStr, '-');//splitting csv date into an array
			if (csvDateArr[0] > inptDateArr[0] || (csvDateArr[0] == inptDateArr[0] && csvDateArr[1] > inptDateArr[1])
				|| (csvDateArr[0] == inptDateArr[0] && csvDateArr[1] == inptDateArr[1] && csvDateArr[2] > inptDateArr[2])){
				count = 1;
				if (checkDaysOfMonth(inptDateArr))
					std::cout << "Error: bad input => " << inptDateArr[0] << "-" << inptDateArr[1] << "-" << inptDateArr[2] << std::endl;
				else
				{
					try{
						std::string::iterator it = lineArr[1].begin();
						++it;
						lineArr[1].erase(lineArr[1].begin(), it);
						try {
							if (!isNumeric(lineArr[1]))
								throw std::out_of_range("Error: input must be numeric => ");
						}
						catch (const std::exception & e) {
							std::cout << e.what() << lineArr[1] << std::endl;
							break;
						}
						float value = strtod(lineArr[1].c_str(), NULL);
						if (value >  std::numeric_limits<float>::max() || value > 1000)
							throw LargeNumber();
						if (value < 0)
							throw NotPositiveNumber();
						tmpArr.clear();
						tmpArr = split_str(lastRes, ',');
						float res = value * std::strtof(tmpArr[1].c_str(), NULL);
						std::cout << "res = " << date << " => " << value << " = " << res << std::endl;
					}catch (const std::exception & e) {
						std::cout << e.what()  << std::endl;
					}
				}
				break ;
			}
			lastRes = line;
			tmpArr.clear();
		}
		if (count == 0)
			std::cout << "exchange rate not found" << std::endl;
		lineArr.clear(); // Clear the vector for the next line
	}
    
    
    return 0;
}