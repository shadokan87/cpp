#include "DiamondTrap.hpp"

typedef std::string str;

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	name = src.name;
	hitpoints = src.hitpoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(str name) : name(name), FragTrap(name + $NAME_EXPAND), ScavTrap(name)
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__) << std::endl;
	hitpoints = FragTrap::hitpoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap()
{
	std::cout << COLOR(GREEN,  __PRETTY_FUNCTION__) << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__ ) << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name: " << name << std::endl << "ClapTrap name: " << FragTrap::name << std::endl;
}

int	DiamondTrap::debug(int n)
{
	switch (n)
	{
		case 0:
			return (DiamondTrap::hitpoints);
		case 1:
			return (DiamondTrap::attackDamage);
		case 2:
			return (DiamondTrap::energyPoints);
	}
	return (-1);
}
