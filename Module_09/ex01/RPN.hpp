#ifndef RPN_HPP
 #define RPN_HPP

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

class RPN
{
	private:
		RPN();
		RPN(const RPN &a);
		RPN &operator= (const RPN& a);

    public:
		~RPN();
		static void handleNotation(std::string arg);
		static double operate(double n1, double n2, char opr);
		class InableToNotate;
};

#endif