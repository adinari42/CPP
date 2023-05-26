#include "Bureaucrat.hpp"
#include "Form.hpp"

// std::exception is the base class for all standard exceptions
//and it defines a virtual member function called what()
//This function returns a C-style string (i.e., a const char*) that describes the exception.
class Bureaucrat::GradeTooHighException : public std::exception {
public:
	const char* what() const throw() {
		return "Bureaucrat exception: Grade is too high";
	}
};
// const char* what() const throw() is a member function that returns a string
// and is declared as const and non-throwing.
class Bureaucrat::GradeTooLowException : public std::exception {
public:
	const char* what() const throw() {
		return "Bureaucrat exception: Grade is too Low";
	}
};

Bureaucrat::Bureaucrat() : name("shrimp"), grade(69)
{
	// std::cout << "default constructor!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):name(other.name),grade(other.grade)
{
	// std::cout << "copy constructor : " << std::endl;
}
//When you catch an exception using a reference to std::exception,
//you can call what() on the caught exception object to retrieve a string representation of the exception
Bureaucrat::Bureaucrat(std::string name_ , int grade_) : name(name_), grade(grade_)
{
	// std::cout << "normal constructor!" << std::endl;
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
}
Bureaucrat::~Bureaucrat()
{
	// std::cout << "deleted boring bureaucrat " << name << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrGrade(void)
{
	try
	{
		if (grade - 1 < 1)
			throw GradeTooHighException();
		grade -= 1;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrGrade(void)
{
	try
	{
		if (grade + 1 > 150)
			throw GradeTooHighException();
		grade += 1;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form _form)
{
	std::cout << getName() << " signed " << _form.getName() << std::endl; 
}

std::ostream &operator<<(std::ostream& os, Bureaucrat &bcrat)
{
	os << bcrat.getName() << ", bureaucrat grade " << bcrat.getGrade() << std::endl;
	return (os);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	grade = other.grade;
	return(*this);
}

