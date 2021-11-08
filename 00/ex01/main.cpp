#include <iostream>
#include <iomanip>
#include <string>
#define LOG(x) std::cout << "LOG" << "[" << x << "]" << std::endl
#define MAIN_PROMPT "ADD | SEARCH | EXIT: "
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

typedef std::string str;

str	fields[ ] = {"first name", "last name","nickname","phone number","darkest secret"
};

class	contact
{
	private:
		void	addInfo(int pos, str elem);
	public:
		str info[5];
		contact(void);
};

contact::contact(void)
{
	return ;
}

void	contact::addInfo(int pos, str elem)
{
	if (pos < 8)
		info[pos] = elem;
	return ;
}
//-----------
class Phonebook
{
	private:
		contact contacts[8];
		int pos;
	public:
		Phonebook(void);
		contact *getContact(int index);
		void	setPos(int pos);
		int		getPos(void);
};

Phonebook::Phonebook(void) : pos(0)
{
}

contact *Phonebook::getContact(int index)
{
	contact *ptr;

	ptr = &contacts[index];
	return (ptr);
}

void	Phonebook::setPos(int newPos)
{
	this->pos = newPos;
	return ;
}

int		Phonebook::getPos(void)
{
	return (this->pos);
}

void	execCmd(str cmd, Phonebook &book)
{
	(void)cmd;
	(void)book;
	if (cmd == ADD || cmd == SEARCH)
	{
		if (cmd == ADD)
		{
			contact *ptr = book.getContact(book.getPos());
			for (int i = 0;i < 5;i++)
			{
				str in = "";
				if (std::cin.eof())
					break ;
				std::cout << fields[i] << ": ";
				std::cin >> in;
				ptr->info[i] = in;
			}
			book.setPos(book.getPos() + 1);
		}
		else
		{
			if (!book.getPos())
			{
				std::cout << "No contacts." << std::endl;
				return ;
			}
			std::cout << "index" << " - ";
			for (int y = 0;y < 3;y++)
			{
				std::cout << fields[y];
				y < 2 ? std::cout << " - " : 0;
			}
			std::cout << std::endl;
			for (int i = 0;i < book.getPos();i++)
			{
				contact *ptr = book.getContact(i);
				std::cout << std::right << i << " | ";
				for (int i = 0;i < 3;i++)
				{
					str current = ptr->info[i];
					std::cout << std::right << current << " | ";
				}
				std::cout << std::endl;
			}
		}
	}
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

