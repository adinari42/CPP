#include	"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("Presidential pardon for default", 25, 5), target("default")
{
}
 
ShrubberyCreationForm::ShrubberyCreationForm(std::string target_) :
	AForm("Presidential pardon for " + target_, 25, 5), target(target_)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) :
	AForm(a), target(a.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& a)
{
	if (a.getSignature() != getSignature())
		setSignature();
	return (*this);
}

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= getExecGrade() && getSignature())
		{
			std::ofstream out_file(target + "_shrubbery", std::ios::app);
			if (out_file.is_open() && out_file.good())
			{
				out_file << "   *" << std::endl;
				out_file << "  ***" << std::endl;
				out_file << " *****" << std::endl;
				out_file << "*******" << std::endl;
				out_file << "   |" << std::endl;
			}
			else
	            std::cerr << "Error: couldn't write into file!" << std::endl;
			out_file.close();
		}
	else
	{
		if (executor.getGrade() > getExecGrade())
			throw GradeTooLowException();
		if (!getSignature())
			throw FormNotSigned();
	}
}
