#include "RPN.hpp"


std::stack<std::string> split_str(std::string str, char delim)
{
	std::stack<std::string> row;
	std::string word;
	std::stringstream s(str);
	while (std::getline(s, word, delim)) {
		row.push(word);
	}
	return row;
}

int main(int argc, char **argv)
{
	
	if (argc != 2)
	{
		std::cout << "Error: Incorrect number of arguments" << std::endl;
		return 1;
	}
	try{
		RPN::handleNotation(argv[1]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}