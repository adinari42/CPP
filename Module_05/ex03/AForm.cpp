#include "AForm.hpp"

AForm::AForm() : name("default AForm"), signature(false), grade_to_sign(50), grade_to_exec(100)
{
}

AForm::AForm(const AForm &a) :
	name(a.name),
	signature(a.signature),
	grade_to_sign(a.grade_to_sign),
	grade_to_exec(a.grade_to_exec)
{
}

AForm::AForm(const std::string name_, const int signGrade, const int execGrade) :
	name(name_),
	signature(false),
	grade_to_sign(signGrade),
	grade_to_exec(execGrade)
{
	try
	{
		if (grade_to_sign < 1)
			throw GradeTooHighException();
		else if (grade_to_sign > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
}

AForm::~AForm()
{
	// std::cout << "deleted boring AForm " << getName() << std::endl;
}

AForm &AForm::operator=(const AForm& a)
{
	signature = a.getSignGrade();
	return (*this);
}

std::string AForm::getName(void) const
{
	return (name);
}

int AForm::getGrade(void) const
{
	return (grade_to_sign);
}

int AForm::getSignGrade(void) const
{
	return (grade_to_sign);
}

int AForm::getExecGrade(void) const
{
	return (grade_to_exec);
}

bool AForm::getSignature(void) const
{
	return (signature);
}
void	AForm::setSignature(void)
{
	if (!signature)
		signature = true;
	else
		signature = false;
}

void AForm::beSigned(Bureaucrat bcrat)
{
	try
	{
		if (bcrat.getGrade() <= getGrade())
		{
			signature = true;
			bcrat.signAForm(getName());
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
// void AForm::execute(Bureaucrat const & executor) const
// {
// 	(void)executor;
// }

std::ostream &operator<<(std::ostream& os, AForm &AForm)
{
	os << AForm.getName() << ", signature: ";
	if (!AForm.getSignature())
		os << "not ";
	os << "signed, grade to sign: " << AForm.getSignGrade() << ", grade to execute: " << AForm.getExecGrade() << std::endl; 
	return (os);
}

