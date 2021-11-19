#include "ScavTrap.hpp"

typedef std::string str;

int	main(void)
{
	ScavTrap player2("player2");
	player2.attack("a random target");
	player2.guardGate();
	player2.guardGate();
}
