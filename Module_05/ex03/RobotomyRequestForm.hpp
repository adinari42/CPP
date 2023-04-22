
#ifndef CLASS_RobotomyRequestForm
# define CLASS_RobotomyRequestForm

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
			std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &a);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
		RobotomyRequestForm &operator= (const RobotomyRequestForm& a);
};

#endif
