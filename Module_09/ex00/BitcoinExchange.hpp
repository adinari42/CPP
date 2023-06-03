#ifndef BITCOINGEXCHANGE_HPP
 #define BITCOINGEXCHANGE_HPP

#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>
#include <array>
#include <deque>
#include <stack>
#include <list>
#include <limits.h>
#include <cfloat>
#include <cstdlib>
#include <cmath>

class BitcoinExchange
{
	private:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &a);
		BitcoinExchange &operator= (const BitcoinExchange& a);
	 
    public:
        ~BitcoinExchange();
        static  void exchange(char *input);
        static int isNumeric(const std::string& str);
        static int checkDaysOfMonth(std::vector<std::string> inptDateArr);
        static std::vector<std::string> split_str(std::string str, char delim);
        static int compareDate(std::vector<std::string> inptDateArr, std::vector<std::string> csvDateArr);

        class NonNumericInput : public std::exception {
            const char* what() const throw() {
                return "Error: input must be numeric => ";
            }
        };
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
};

#endif