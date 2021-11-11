#include <iostream>
#include "./Zombie.hpp"

int	main(void)
{
	randomChump("stack");
	Zombie *heap = newZombie("heap");
	delete heap;
}
