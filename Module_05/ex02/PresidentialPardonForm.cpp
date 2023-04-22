#include	"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("Presidential pardon for default", 25, 5), target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_) :
	AForm("Presidential pardon for " + target_, 25, 5), target(target_)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) :
	AForm(a), target(a.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& a)
{
	if (a.getSignature() != getSignature())
		setSignature();
	return (*this);
}

void  PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= getExecGrade() && getSignature())
		std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
	{
		if (executor.getGrade() > getExecGrade())
			throw GradeTooLowException();
		if (!getSignature())
			throw FormNotSigned();
	}
}

