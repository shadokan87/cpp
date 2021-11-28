#include "./Bureaucrat.hpp"
#include "./Form.hpp"

Bureaucrat::Bureaucrat(void) : name("Ralph la casse"), grade($LOW)
{

}

Bureaucrat::Bureaucrat(int grade, str name) : name(name)
{
	do_if (this->grade = grade, grade <= 150 && grade >= 1)
	else if (grade < 1)
		throw GradeTooLowException();
	else
		throw GradeTooHighException();
}

void	Bureaucrat::executeForm(const Form & __name)
{
	if (!__name.getStatus())
	{
		throw NotSigned();
		return ;
	}
	try {
	__name.execute(*this);
	std::cout << this->getName() << " execute " << __name.getName() << std::endl;
	}
	catch (const std::exception &e){
	std::cout << this->getName() << " failed to execute " << __name.getName() << std::endl;
	}
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

unsigned int Bureaucrat::getGrade(void) const { return (grade); }
const str Bureaucrat::getName(void) const { return (name); }
