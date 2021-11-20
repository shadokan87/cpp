#include "Diamond.hpp"

typedef std::string str;

Diamond &Diamond::operator=(const Diamond &src)
{
	name = src.name;
	hitpoints = src.hitpoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return (*this);
}

Diamond::Diamond(str name) : name(name), FragTrap(name + $NAME_EXPAND), ScavTrap(name)
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__) << std::endl;
	hitpoints = FragTrap::hitpoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

Diamond::Diamond()
{
	std::cout << COLOR(GREEN,  __PRETTY_FUNCTION__) << std::endl;
}

Diamond::~Diamond()
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__ ) << std::endl;
}

void	Diamond::whoami()
{
	std::cout << "My name: " << name << std::endl << "ClapTrap name: " << FragTrap::name << std::endl;
}

int	Diamond::debug(int n)
{
	switch (n)
	{
		case 0:
			return (Diamond::hitpoints);
		case 1:
			return (Diamond::energyPoints);
		case 2:
			return (Diamond::attackDamage);
	}
	return (-1);
}
