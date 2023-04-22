#include	"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("Robotomy form for default", 72, 45), target("default")
{	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_) :
	AForm("Robotomy form for " + target_, 72, 45), target(target_)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) :
	AForm(a), target(a.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& a)
{
	if (a.getSignature() != getSignature())
		setSignature();
	return (*this);
}

void  RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

	if (executor.getGrade() <= getExecGrade() && getSignature())
	{
		srand(time(0));  // Initialize random number generator(a seed/pattern).
		if (rand() % 10 >= 5)
			std::cout << "SKRRRRRRRRRRRR BRRRRRRRRRRRRRR PAPAPAPAPAPAKAKAKAKAK PRRRRRRRRRRRR "
				<< target << " has been robotomized successfully" << std::endl;
		else
			std::cout << target << " robotomy failed." << std::endl;
	}
	else
	{
		if (executor.getGrade() > getExecGrade())
			throw GradeTooLowException();
		if (!getSignature())
			throw FormNotSigned();
	}
}
