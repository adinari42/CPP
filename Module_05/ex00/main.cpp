#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat dude1;
	Bureaucrat dude2("prawn", 143);
	Bureaucrat dude3 = dude2;
	std::cout << dude3 << std::endl;
	dude3 = dude1;
	std::cout << dude3 << std::endl;
	std::cout << "-------------------\n";
	std::cout << dude2 << std::endl;
	// dude3 = dude1;

	// std::cout <<  dude1.getName() << " " << dude1.getGrade() << std::endl;
	// dude1.incrGrade();
	// std::cout <<  dude1.getName() << " " << dude1.getGrade() << std::endl;
	// dude1.decrGrade();
	// std::cout << dude1;
	// std::cout <<  dude1.getName() << " " << dude1.getGrade() << std::endl;
	// std::cout <<  dude2.getName() << " " << dude2.getGrade() << std::endl;
	// std::cout <<  dude3.getName() << " " << dude3.getGrade() << std::endl;
}