#include "./Form.hpp"

Form::Form(void) : isSigned(false), signGrade(150), executeGrade(150), name("undefined")
{
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	if (executeGrade < 1 || signGrade < 1)
		throw GradeTooHighException();
}

Form::Form(str name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade), isSigned(false)
{
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	if (executeGrade < 1 || signGrade < 1)
		throw GradeTooHighException();
}

Form &Form::operator=(Form &src)
{
	this->isSigned = src.isSigned;
	return (*this);
}

int	Form::getSignGrade(void)
{
	return (signGrade);
}

int	Form::getExecuteGrade(void)
{
	return (executeGrade);
}

bool	Form::getStatus(void) const
{
	return (isSigned);
}

str Form::getName(void) const
{
	return (name);
}

Form::~Form(void)
{

}

std::ostream &operator<<(std::ostream & out, Form &src)
{
	out 
	<< "[F: " << COLOR(CYAN, src.getName()) << "]"
	<< COLOR(YELLOW, " status: ") << src.getStatus()
	<< COLOR(YELLOW, " SignGrade: ") << src.getSignGrade() 
	<< COLOR(YELLOW, " ExecuteGrade: ") << src.getExecuteGrade() 
	<< std::endl;
	return (out);
}

Form &Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= signGrade)
	{
		isSigned = true;
		return (*this);
	}
	else throw GradeTooLowException();
}
