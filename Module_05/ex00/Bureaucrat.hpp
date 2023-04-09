#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>

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
		class GradeTooHighException;
		class GradeTooLowException;
		Bureaucrat &operator=(const Bureaucrat &other);
};

std::ostream &operator<<(std::ostream& os, Bureaucrat &bcrat);

#endif