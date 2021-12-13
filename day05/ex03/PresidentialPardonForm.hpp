#ifndef PARDON_FORM_HPP
# define PARDON_FORM_HPP
#include "./Form.hpp"
#include "./Bureaucrat.hpp"
#include <fstream>
class PresidentialPardonForm : virtual public Form
{
	public:
		~PresidentialPardonForm(void);
		PresidentialPardonForm(void);
		PresidentialPardonForm(str name);
		PresidentialPardonForm &operator=(PresidentialPardonForm &src);
		void	execute (Bureaucrat const & executor) const;
		virtual Form &beSigned(Bureaucrat &src);
	private:
};
#endif
