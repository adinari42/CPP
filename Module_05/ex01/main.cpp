#include "Form.hpp"

int main(void)
{
	Bureaucrat dude1;
	Bureaucrat dude2("prawn", 90);
	Form form1("form1", 100, 120);


	std::cout <<  form1 << std::endl;
	form1.beSigned(dude2);
	std::cout <<  form1 << std::endl;

	// std::cout <<  dude1.getName() << " " << dude1.getGrade() << std::endl;
	// dude1.incrGrade();
	// std::cout <<  dude1.getName() << " " << dude1.getGrade() << std::endl;
	// dude1.decrGrade();
	// std::cout << dude1;
	// std::cout <<  dude1.getName() << " " << dude1.getGrade() << std::endl;
	// std::cout <<  dude2.getName() << " " << dude2.getGrade() << std::endl;
	// std::cout <<  dude3.getName() << " " << dude3.getGrade() << std::endl;
}