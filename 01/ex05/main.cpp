#include <iostream>
#include <string>

typedef std::string str;

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(str);
		Karen(void);
		~Karen(void);
};


Karen::Karen(void) {}
Karen::~Karen(void) {}

void	Karen::complain(str elem)
{
	static void	(*func[])() = {debug};
	static const char *levels[ ] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0;i < 4;i++)
	{
		if (levels[i] == elem)
		{
			for (int y = i;y < 4;y++)
				(func[i])(void);
		}
	}
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int	main(void)
{
	return (0);
}
