#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Ralph la casse"), grade($LOW)
{

}

Bureaucrat::Bureaucrat(int grade, str name)
{
	do_if (this->grade = grade, grade <= 150 && grade >= 1)
	else if (grade < 1)
		throw GradeTooLowException();
	else
		throw GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &src)
{
	this->grade = src.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {}

void	Bureaucrat::increaseGrade(void)
{
	do_if(grade--, !(grade == 1))
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decreaseGrade(void)
{
	do_if(grade++, !(grade == 150))
	else
		throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & out, Bureaucrat &src)
{
	out << COLOR(GREEN, "name: ") << src.getName() << COLOR(YELLOW, " grade: ") << src.getGrade();
	return (out);
}

unsigned int Bureaucrat::getGrade(void) { return (grade); }
const str Bureaucrat::getName(void) { return (name); }
