#include "./Karen.hpp"
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	Karen test;

	if (argc != 2)
	{
		std::cout << "Error: argument" << std::endl;
		return (1);
	}
	test.complain(argv[1]);
	return (0);
}
