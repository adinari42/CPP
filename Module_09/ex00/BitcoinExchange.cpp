#include "BitcoinExchange.hpp"


int BitcoinExchange::isNumeric(const std::string& str)
{
    if (str.empty())
        return 0;
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
		if ((*it < '0' || *it > '9') && *it != '-' && *it != '.')
		return 0;
    }
    return 1;
}

int BitcoinExchange::checkDaysOfMonth(std::vector<std::string> inptDateArr)
{
    int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year = static_cast<int>(strtol(inptDateArr[0].c_str(), NULL, 10));
    int month = static_cast<int>(strtol(inptDateArr[1].c_str(), NULL, 10));
    int day = static_cast<int>(strtol(inptDateArr[2].c_str(), NULL, 10));

    if (month > 12 || month < 1 || day > arr[month - 1] || day < 1)
        return 1;
    if (month == 2 && ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))))
    {
        if (day > arr[month - 1] + 1)
            return 1;
    }
    return 0;
}

std::vector<std::string> BitcoinExchange::split_str(std::string str, char delim)
{
	std::vector<std::string> row;
	std::string word;
	std::stringstream s(str);
	while (std::getline(s, word, delim)) {
		row.push_back(word);
	}
	return row;
}

int BitcoinExchange::compareDate(std::vector<std::string> inptDateArr, std::vector<std::string> csvDateArr)
{
	std::string::iterator it = inptDateArr[2].end();
	inptDateArr[2].erase(inptDateArr[2].end() - 1, it);
	it = csvDateArr[2].end();
	csvDateArr[2].erase(csvDateArr[2].end() - 1, it);
	if (!isNumeric(inptDateArr[0]) || !isNumeric(inptDateArr[1]) || !isNumeric(inptDateArr[2])
		|| !isNumeric(csvDateArr[0]) || !isNumeric(csvDateArr[1]) || !isNumeric(csvDateArr[2]))
        return 1;
	int arr1[3] = {static_cast<int>(strtol(inptDateArr[0].c_str(), NULL, 10)), static_cast<int>(strtol(inptDateArr[1].c_str(), NULL, 10)), static_cast<int>(strtol(inptDateArr[2].c_str(), NULL, 10))};
	int arr2[3] = {static_cast<int>(strtol(csvDateArr[0].c_str(), NULL, 10)), static_cast<int>(strtol(csvDateArr[1].c_str(), NULL, 10)), static_cast<int>(strtol(csvDateArr[2].c_str(), NULL, 10))};

	if (arr2[0] > arr1[0] || (arr2[0] == arr1[0] && arr2[1] > arr1[1])
		|| (arr2[0] == arr1[0] && arr2[1] == arr1[1] && arr2[2] > arr1[2]))
		return 0;
	return (1);
}

void BitcoinExchange::exchange(char *input){
	int count = 0;
    std::ifstream inptFile(input);//open input file
	std::string inptLine;
	std::getline(inptFile, inptLine);//skip first line
	while(std::getline(inptFile, inptLine))//as long as we read lines from input file
	{
		std::string line;
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
			if (!compareDate(inptDateArr, csvDateArr)){
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
								throw NonNumericInput();
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
}