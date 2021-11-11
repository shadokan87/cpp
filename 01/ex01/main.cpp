#include <iostream>
#include "./Zombie.hpp"

typedef std::string str;

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "usage: <N> <name>" << std::endl;
		return (1);
	}
	int	N = ft::stoi(argv[1]);
	if (N <= 0)
	{
		std::cout << "It was supposed to be a horde." << std::endl;
		return (1);
	}
	else
	{
		Zombie *arr = zombieHorde(N, argv[2]);
		for (int i = 0;i < N;i++)
			arr[i].announce();
		delete[ ] arr;
		return (0);
	}
	return (0);
}