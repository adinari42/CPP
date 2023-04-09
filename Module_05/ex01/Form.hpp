#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>

class Form
{
	private:
		const std::string	name;
		bool 				signature;
		const int			grade_to_sign;
		const int			grade_to_exec;
	public:
		Form();
		Form(const std::string name_, const int signGrade, const int execGrade);
		Form(const Form &a);
		~Form();
		void beSigned(Bureaucrat bcrat);
		std::string getName(void) const;
		int getSignGrade(void) const;
		bool getSignature();
		int getExecGrade(void) const;
		int getGrade(void) const;
		Form &operator= (const Form& a);
		class GradeTooHighException;
		class GradeTooLowException;
};

std::ostream &operator<<(std::ostream& os, Form &Form);

#endif