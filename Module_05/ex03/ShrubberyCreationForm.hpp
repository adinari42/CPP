
#ifndef CLASS_ShrubberyCreationForm
# define CLASS_ShrubberyCreationForm

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &a);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm& a);
		void execute(Bureaucrat const & executor) const;
};

#endif