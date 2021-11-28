#include "./Intern.hpp"
#define _for_each(CONTEXT, S, C1, C2) for (int _ = 0;_ < S;_++)if (C1)C2

Intern::Intern(void)
{	
}

Intern::~Intern(void)
{	
}

Form *Intern::makeForm(str name, str target)
{
	static const char *fields[ ] = {"shrubbery request","robotomy request", "presidentialPardon request"};
	int i = 0;
	for (;i < 3;i++)
	{
		if (fields[i] == name)
			break ;
	}
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			throw Error404();
	}
	
}
