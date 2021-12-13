#ifndef ROBOTOMY_FORM_HPP
# define ROBOTOMY_FORM_HPP
#include "./Form.hpp"
#include "./Bureaucrat.hpp"
#include <fstream>
class RobotomyRequestForm : virtual public Form
{
	public:
		~RobotomyRequestForm(void);
		RobotomyRequestForm(void);
		RobotomyRequestForm(str name);
		void	execute (Bureaucrat const & executor) const;
		virtual Form &beSigned(Bureaucrat &src);
	private:
};
#endif
