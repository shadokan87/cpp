#include "FragTrap.hpp"

typedef std::string str;

FragTrap::FragTrap(void)
{
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

FragTrap::FragTrap(str name) : ClapTrap(name)
{
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
