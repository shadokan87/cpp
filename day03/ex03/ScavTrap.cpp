#include "ScavTrap.hpp"

typedef std::string str;

ScavTrap::ScavTrap(void) : guard(false)
{
	std::cout << __PRETTY_FUNCTION__<< std::endl;
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(str name) : ClapTrap(name)
{
	std::cout << __PRETTY_FUNCTION__<< std::endl;
	guard = false;
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (!guard)
	{
		std::cout << "ScavTrap has entered the gate keeper mode" << std::endl;
		guard = true;
	}
	else
	{
		std::cout << "ScavTrap has stopped the gate keeper mode" << std::endl;
		guard = false;
	}

}
