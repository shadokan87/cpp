#ifndef FORM_HPP
# define FORM_HPP
#include "./Bureaucrat.hpp"
#include <iostream>
typedef std::string str;
class Form
{
	public:
		Form(void);
		Form(str name, int signGrade, int executeGrade);
		virtual ~Form(void) = 0;
		Form &operator=(Form &src);
		int	getSignGrade(void);
		int	getExecuteGrade(void);
		bool getStatus(void) const;
		str	getName(void) const;
		virtual void	execute (Bureaucrat const & executor) const = 0;
		virtual Form	&beSigned(Bureaucrat &src) = 0;
		class GradeTooHighException : public std::exception
		{
			public:
			GradeTooHighException(void) {}
			virtual const char* what() const throw()	{ return ($GradeTooHighException_MSG); }
		};
		class GradeTooLowException : public std::exception
		{
			public:
			GradeTooLowException(void) {}
			virtual const char* what() const throw()	{ return ($GradeLowHighException_MSG); }
		};
		private:
		const str name;
		const int	signGrade;
		const int	executeGrade;
		bool isSigned;

};

std::ostream &operator<<(std::ostream & out, Form &src);
#endif
