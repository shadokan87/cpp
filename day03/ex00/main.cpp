#include "ClapTrap.hpp"

typedef std::string str;

int	main(void)
{
	ClapTrap player("player1");

	player.attack("a random target");
	player.takeDamage(200);
	player.beRepaired(5);
}
