#include "./ShrubberyCreationForm.hpp"
#define $signGrade 145
#define $executeGrade 137

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("undefined.", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(str name)
	: Form(name, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src)
{
	return (*this);
}

Form &ShrubberyCreationForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > $signGrade)
		throw GradeTooLowException();
	else
	{
		std::cout
			<< COLOR(GREEN, "[OK]")
			<< src.getName() 
			<< " signed the ShrubberyCreationForm." << std::endl;
		return (*this);
	}
}

char	*strToChar(str src)
{
	const int size = src.size();
	char *ret = new char[size + 1];
	for (int i = 0;i < size;i++)
		ret[i] = src[i];
	ret[size] = '\0';
	return (ret);
}

void	ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	str path = executor.getName() + "_shrubbery";;
	char	*tmp = strToChar(path);
	if (executor.getGrade() > $executeGrade)
	{
		throw GradeTooLowException();
		delete tmp;
		return ;
	}
	std::ofstream src(tmp);
	delete tmp;
	if (src.fail() || !src.is_open())
	{
		std::cerr << "failed to open path: " << path << std::endl;
		return ;
	}
    src << "       _-_" << std::endl;
    src << "    /~~   ~~\\" << std::endl;
    src << " /~~         ~~\\" << std::endl;
    src << "{               }" << std::endl;
    src << " \\  _-     -_  /" << std::endl;
    src << "   ~  \\\\ //  ~" << std::endl;
    src << "_- -   | | _- _" << std::endl;
    src << "  _ -  | |   -_" << std::endl;
    src << "      // \\\\" << std::endl;
	src.close();
		std::cout
			<< COLOR(GREEN, "[OK]")
			<< executor.getName() 
			<< " executed the ShrubberyCreationForm." << std::endl;
}
