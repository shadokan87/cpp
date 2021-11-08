#include <iostream>
#include <string>
typedef std::string str;

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1;i < argc;i++)
		{
			str current = static_cast<str>(argv[i]);
			for (str::iterator c = current.begin();c != current.end();c++)
				std::cout << static_cast<char>(toupper(*c));
		}
	}
	return (0);
}
