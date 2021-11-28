#include "./PresidentialPardonForm.hpp"
#include <cstdlib>
#define $signGrade 25
#define $executeGrade 5

PresidentialPardonForm::PresidentialPardonForm(void) : Form("undefined.", $signGrade, $executeGrade)
{
}

PresidentialPardonForm::PresidentialPardonForm(str name)
	: Form(name, $signGrade, $executeGrade)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &src)
{
	return (*this);
}


Form &PresidentialPardonForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > $signGrade)
		throw GradeTooLowException();
	else
	{
		std::cout
			<< COLOR(GREEN, "[OK]")
			<< src.getName() 
			<< " signed the PresidentialPardonForm." << std::endl;
		return (*this);
	}
}

void	PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	int	max = 2;
	int	min = 1;
	int randNum = rand()%(max-min + 1) + min;

	if (executor.getGrade() > $executeGrade)
	{
		throw GradeTooLowException();
		return ;
	}
	std::cout << executor.getName() << " has been forgiven by Zafod Beeblebrox" << std::endl;
}
