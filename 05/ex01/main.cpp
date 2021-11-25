#include "./Bureaucrat.hpp"
#include <exception>
#include <sstream>
#include "./Form.hpp"
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
	if (argc != 4)
	{
		std::cout << "Usage: Form constructor: <name> <signGrade> <executeGrade>" << std::endl;
		return (0);
	}
	Bureaucrat thisIsBob;
	Form form(argv[1], ft::stoi(argv[2]), ft::stoi(argv[3]));
	str in = "";
	while (1 && !std::cin.eof() && !(in == "EXIT"))
	{
		std::cin >> in;
		do_if(
			try
			{
				form.beSigned(thisIsBob);
				std::cout << form;
			}
			catch (const std::exception &e)
			{
				std::cout << COLOR(YELLOW, "[!]") << form;
			}
		,
		in == "s");
		for_each(in, in.size(), in[_] == '+' || in[_] == '-',
		{
			try
			{
				if (in[_] == '-')
					thisIsBob.decreaseGrade();
				else
					thisIsBob.increaseGrade();
			}
			catch (const std::exception &e)
			{
				str what = e.what();
				std::cout << (what == "low" ? "[L]" : "[H]") << COLOR(YELLOW, "[!] ");
			}
			std::cout << thisIsBob << std::endl;
		})
	}
	std::cout << "Bye !" << std::endl;
	return (0);
}
