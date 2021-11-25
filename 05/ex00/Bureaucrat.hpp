#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#define do_if(A, C1) if (C1)A;
#define for_each(FOR_EACH_CONTEXT, SIZE, C1, C2) for (int _ = 0;_ < SIZE;_++)if (C1)C2
#define $GradeTooHighException_MSG "high"
#define $GradeLowHighException_MSG "low"
#define $LOW 150
#define $HIGH 1
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET
typedef std::string str;
class Bureaucrat
{
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(int grade, str name);
		Bureaucrat &operator=(Bureaucrat &src);
		const str getName(void);
		unsigned int getGrade(void);
		void	decreaseGrade(void);
		void	increaseGrade(void);
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
		unsigned int grade;
};

std::ostream & operator<<(std::ostream & out, Bureaucrat &src);
#endif
