#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main(void)
{
	Bureaucrat				dude2("benzema", 2);
	PresidentialPardonForm	presidentialform1("obama");
	RobotomyRequestForm		roboto1("toaster");
	ShrubberyCreationForm		shrubbery1("backyard");

	std::cout << presidentialform1;
	std::cout << roboto1;
	std::cout << shrubbery1;
	/*should throw exception because they are not signed*/
	std::cout << "-----exceptions excecuting unsigned form-----" << std::endl;
	dude2.executeForm(presidentialform1);
	dude2.executeForm(roboto1);
	dude2.executeForm(shrubbery1);
	std::cout << "-------signing forms-------------" << std::endl;

	presidentialform1.beSigned(dude2);
	std::cout << presidentialform1;
	roboto1.beSigned(dude2);
	shrubbery1.beSigned(dude2);
	std::cout << "----------excecuting signed forms----------" << std::endl;
	dude2.executeForm(roboto1);
	dude2.executeForm(presidentialform1);
	dude2.executeForm(shrubbery1);//this one plants a tree in backyard_shrubbery file

}