#include <iostream>
#include "./Cast.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: <string>" << std::endl;
		return (0);
	}
	Cast onsenfoudunom(argv[1]);
	onsenfoudunom.print();
	//std::cout << onsenfoudunom << std::endl;
}
