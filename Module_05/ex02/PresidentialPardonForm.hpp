
#ifndef CLASS_PresidentialPardonForm
# define CLASS_PresidentialPardonForm

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &a);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator= (const PresidentialPardonForm& a);
		void execute(Bureaucrat const & executor) const;
};

#endif
