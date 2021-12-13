#include "./RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#define $signGrade 72
#define $executeGrade 45

RobotomyRequestForm::RobotomyRequestForm(void) : Form("undefined.", $signGrade, $executeGrade)
{
}

RobotomyRequestForm::RobotomyRequestForm(str name)
	: Form(name, $signGrade, $executeGrade)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

Form &RobotomyRequestForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > $signGrade)
		throw GradeTooLowException();
	else
	{
		std::cout
			<< COLOR(GREEN, "[OK]")
			<< src.getName() 
			<< " signed the RobotomyRequestForm." << std::endl;
		return (*this);
	}
}

void	RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	srand(time(NULL));
	int	randnum = 1 + rand() % 6;

	if (executor.getGrade() > $executeGrade)
	{
		throw GradeTooLowException();
		return ;
	}
	if (randnum % 2 == 0)
		std::cout
		<< "brrrrrrrr "
		<< executor.getName()
		<< "has been robotomized" << std::endl;
	else
	{
		std::cout
			<< executor.getName()
			<< " still holds onto his humanity..."
			<< std::endl;
	}
}
