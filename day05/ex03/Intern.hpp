#ifndef INTERN_HPP
# define INTERN_HPP
#include "./Form.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"

typedef std::string str;
class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Form *makeForm(str name, str target);
		class Error404 : public std::exception
		{
			public:
			Error404(void) {}
			virtual const char* what() const throw()	{ return ("Error 404 form not found"); }
		};
	private:
};
#endif
