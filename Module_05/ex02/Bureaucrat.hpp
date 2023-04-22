#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <fstream>

// #include "AForm" causes a circular dependency between the Bureaucrat and AForm header files
//using a forward declarations tells the compiler that there is a class called AForm that exists,
//without requiring the entire definition of the class
class AForm;

class Bureaucrat 
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name_, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);
		std::string getName(void) const;
		int getGrade(void) const;
		void incrGrade(void);
		void decrGrade(void);
		void signAForm(std::string formName);
		class GradeTooHighException;
		class GradeTooLowException;
		void	executeForm(AForm const & form);
		Bureaucrat &operator=(const Bureaucrat &other);
};

std::ostream &operator<<(std::ostream& os, Bureaucrat &bcrat);

#endif