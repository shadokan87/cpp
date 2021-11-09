#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
#include "Phonebook.hpp"
#define MAIN_PROMPT "ADD | SEARCH | EXIT: "
#define INDEX_PROMPT "SELECT INDEX | EXIT: "
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

typedef std::string str;

str	fields[ ] = {"first name", "last name","nickname","phone number","darkest secret"
};

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
void	execCmd(str cmd, Phonebook &book)
{
	(void)cmd;
	(void)book;
	if (cmd == ADD || cmd == SEARCH)
	{
		if (cmd == ADD) //prompt for ADD command
		{
			int	pos;

			pos = book.getPos();
			contact *ptr = book.getContact(pos == 8 ? 0 : pos);
			for (int i = 0;i < 5;i++)
			{
				str in = "";
				if (std::cin.eof())
					break ;
				std::cout << fields[i] << ": ";
				std::cin >> in;
				ptr->info[i] = in;
			}
			if (pos != 8)
				book.setPos(book.getPos() + 1);
		}
		else
		{
	#ifndef FORMAT
	# define FORMAT(x) std::setw(10) << std::right
	#endif
			if (!book.getPos())
			{
				std::cout << "No contacts." << std::endl;
				return ;
			}
			//display row
			std::cout << FORMAT(10) << "index" << " | ";
			for (int y = 0;y < 3;y++)
				std::cout << FORMAT(10) << fields[y] << " | ";
			std::cout << std::endl;
			//display columns
			for (int i = 0;i < book.getPos();i++)
			{
				contact *ptr = book.getContact(i);
				std::cout << FORMAT(10) << i << " | ";
				for (int i = 0;i < 3;i++)
				{
					str current = ptr->info[i];
					if (current.size() > 10)
					{
						current = current.substr(0, 9);
						current = current + ".";
					}
					std::cout << FORMAT(10) << current << " | ";
				}
				std::cout << std::endl;
			}
			//prompt for index selection
			str in = "";
			bool ok = false;
			while (1 && !std::cin.eof() && !ok)
			{
				std::cout << INDEX_PROMPT;
				std::cin >> in;
				if (in == EXIT)
					break ;
				//check if input is valid
				if (ft::strIsdigit(in) == false)
					std::cout << "Input must contain only numbers." << std::endl;
				else if (ft::stoi(in) > book.getPos() - 1)
					std::cout << "Index out of range." << std::endl;
				else
				{
					contact *ptr = book.getContact(ft::stoi(in));
					for (int i = 0;i < 5;i++)
					{
						std::cout << FORMAT(20) << fields[i] << ": " << ptr->info[i];
						std::cout << std::endl;
					}
					ok = true;
				}
			}
		}
	}
	else if (cmd != EXIT)
		std::cout << "Unkown command: " << cmd << std::endl;
	else
		std::cout << "Exiting now." << std::endl;
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	contact test;
	Phonebook book;
	str in = "";
	while (1 && !std::cin.eof() && !(in == EXIT))
	{
		std::cout << MAIN_PROMPT;
		std::cin >> in;
		execCmd(in, book);
	}
	return (0);
}

