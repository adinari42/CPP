#include "Form.hpp"

class Form::GradeTooHighException : public std::exception {
public:
	const char* what() const throw() {
		return "Form exception: Grade is too high";
	}
};

class Form::GradeTooLowException : public std::exception {
public:
	const char* what() const throw() {
		return "Form exception: Grade is too Low";
	}
};

Form::Form() : name("default form"), signature(false), grade_to_sign(50), grade_to_exec(100)
{
}

Form::Form(const Form &a) :
	name(a.name),
	signature(a.signature),
	grade_to_sign(a.grade_to_sign),
	grade_to_exec(a.grade_to_exec)
{
}

Form::Form(const std::string name_, const int signGrade, const int execGrade) :
	name(name_),
	signature(false),
	grade_to_sign(signGrade),
	grade_to_exec(execGrade)
{
	try
	{
		if (grade_to_sign > 1 && grade_to_sign < 150)
			std::cout << getName() << " grade is valid" << std::endl;
		else
		{
			if (grade_to_sign < 1)
				throw GradeTooHighException();
			else if (grade_to_sign > 150)
				throw GradeTooLowException();
			
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
}

Form::~Form()
{
	// std::cout << "deleted boring form " << getName() << std::endl;
}

Form &Form::operator=(const Form& a)
{
	signature = a.getSignGrade();
	return (*this);
}

std::string Form::getName(void) const
{
	return (name);
}

int Form::getGrade(void) const
{
	return (grade_to_sign);
}

int Form::getSignGrade(void) const
{
	return (grade_to_sign);
}

int Form::getExecGrade(void) const
{
	return (grade_to_exec);
}

bool Form::getSignature(void)
{
	return (signature);
}

void Form::beSigned(Bureaucrat bcrat)
{
	try
	{
		if (bcrat.getGrade() <= getGrade())
		{
			signature = true;
			bcrat.signForm(*this);
		}
		else
			throw GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
}

std::ostream &operator<<(std::ostream& os, Form &Form)
{
	os << Form.getName() << ", signature: ";
	if (!Form.getSignature())
		os << "not ";
	os << "signed, grade to sign: " << Form.getSignGrade() << ", grade to execute: " << Form.getExecGrade() << std::endl; 
	return (os);
}

