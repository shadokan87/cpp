#include "./Bureaucrat.hpp"
#include <exception>
#include <sstream>
#include "./Form.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"
typedef std::string str;

namespace ft
{

bool	strIsdigit(str elem)
{
	for (int i = 0;i < elem.size();i++)
		if (!std::isdigit(static_cast<unsigned char>(elem[i])))
			return (false);
	return (true);
}

int		stoi(str elem)
{
	int	ret;

	std::istringstream(elem) >> ret;
	return (ret);
}
}
int	main(int argc, char **argv)
{
	ShrubberyCreationForm	A;
	RobotomyRequestForm		B;
	PresidentialPardonForm	C;
	if (argc != 3)
	{
		std::cout << "Usage: bureaucrat constructor: <name> <grade>"  << std::endl;
		return (0);
	}
	try{
		Bureaucrat test(ft::stoi(argv[2]), argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cout << "Usage: bureaucrat constructor: <name> <grade>[1 - 150]"  << std::endl;
		return (0);
	}
	Bureaucrat sudo(ft::stoi(argv[2]), argv[1]);
	try {
		A.beSigned(sudo);
		A.execute(sudo);
	}
	catch (const std::exception &e)
	{
		std::cout << COLOR(YELLOW, "[KO]") << e.what() << std::endl;
	}
	try {
		B.beSigned(sudo);
		B.execute(sudo);
	}
	catch (const std::exception &e)
	{
		std::cout << COLOR(YELLOW, "[KO]") << e.what() << std::endl;
	}
	try {
		C.beSigned(sudo);
		C.execute(sudo);
	}
	catch (const std::exception &e)
	{
		std::cout << COLOR(YELLOW, "[KO]") << e.what() << std::endl;
	}
	return (0);
}
