#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>

class AForm
{
	private:
		const std::string	name;
		bool 				signature;
		const int			grade_to_sign;
		const int			grade_to_exec;
	public:
		AForm();
		AForm(const std::string name_, const int signGrade, const int execGrade);
		AForm(const AForm &a);
		~AForm();
		void beSigned(Bureaucrat bcrat);
		std::string getName(void) const;
		int getSignGrade(void) const;
		bool getSignature() const;
		int getExecGrade(void) const;
		int getGrade(void) const;
		void	setSignature(void);
		AForm &operator= (const AForm& a);
		/*By providing the full definitions of the exception classes within the AForm class declaration,
		compiler can properly instantiate them when they are used in the member functions.*/
		//this problem happens mainly when we use derived classes and
		//they need to access the full implementation of the exceptions at once
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {
					return "AForm exception: Grade is too high!";
			}
		};
		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw() {
				return "AForm exception: Grade is too Low!";
			}
		};
		class FormNotSigned : public std::exception {
		public:
			const char* what() const throw() {
				return "AForm exception: Form is not signed!";
			}
		};
		virtual void execute(Bureaucrat const & executor) const  = 0;//pure virtual member function , has to be overriden by subclass
};

std::ostream &operator<<(std::ostream& os, AForm &AForm);

#endif