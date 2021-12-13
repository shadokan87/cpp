#ifndef TREE_FORM_HPP
# define TREE_FORM_HPP
#include "./Form.hpp"
#include "./Bureaucrat.hpp"
#include <fstream>
class ShrubberyCreationForm : virtual public Form
{
	public:
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(str name);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &src);
		void	execute (Bureaucrat const & executor) const;
		virtual Form &beSigned(Bureaucrat &src);
	private:
};
#endif
