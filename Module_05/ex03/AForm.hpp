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
		virtual void execute(Bureaucrat const & executor) const  = 0;
};

std::ostream &operator<<(std::ostream& os, AForm &AForm);

#endif