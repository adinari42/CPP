#include "RPN.hpp"

class RPN::InableToNotate : public std::exception {
	const char* what() const throw() {
		return "Error: Could not handle notation!";
	}
};

double RPN::operate(double n1, double n2, char opr)
{
	if (opr == '+')
		return (n1 + n2);
	else if (opr == '-')
		return (n1 - n2);
	else if (opr == '*')
		return (n1 * n2);
	else if (opr == '/')
	{
		if (n1 == 0 || n2 == 0)
			return (std::numeric_limits<double>::infinity());
		return (n1 / n2);
	}
	else
		throw InableToNotate();
}

void RPN::handleNotation(std::string arg){
	std::stack<double> stack;
	std::string char_;
	std::stringstream s(arg);
	while (s >> char_) {
		if (char_[0] >= '0' && char_[0] <= '9' && char_.length() == 1)
			stack.push(char_[0]-'0');
		else if ((char_[0] == '+' || char_[0] == '-' || char_[0] == '*' || char_[0] == '/' ) && char_.length() == 1)
		{
			double n2 = stack.top();
			stack.pop();
			double n1 = stack.top();
			stack.pop();
			stack.push(operate(n1, n2, char_[0]));
		}
		else
			throw InableToNotate();
	}
	while (!stack.empty()) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
}