#include "Form.hpp"

int main(void)
{
	Bureaucrat dude1;
	Bureaucrat dude2("prawn", 90);
	Form form1("form1", 100, 120);


	std::cout <<  form1 << std::endl;
	form1.beSigned(dude2);
	std::cout <<  form1 << std::endl;
}