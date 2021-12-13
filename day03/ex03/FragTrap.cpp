#include "FragTrap.hpp"

typedef std::string str;

FragTrap &FragTrap::operator=(FragTrap &src)
{
	hitpoints = src.hitpoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return (*this);
}

FragTrap::FragTrap(void)
{
	hitpoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

FragTrap::FragTrap(str name) : ClapTrap(name)
{
	hitpoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "give me fiiive. now !" << std::endl;
}
