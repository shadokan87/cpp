#include "ClapTrap.hpp"
#define $DAMAGE_MSG(amount) " took " << amount << " of damage !"
#define $ATTACK_MSG(target) " attacks " << target << " dealing: " << attackDamage
#define $REPAIR(name) name << " needs to be repaired !"
#define $SPAWN(h, e, a) " has spawned " << h << ":" << e << ":" << a
#define $HITPOINTS 100
#define $ENERYPOINTS 50
#define $ATTACKDAMAGE 20

typedef std::string str;

ClapTrap::ClapTrap() : name(""), hitpoints($HITPOINTS), energyPoints($ENERYPOINTS), attackDamage($ATTACKDAMAGE) 
{
	//std::cout << name << $SPAWN(hitpoints, energyPoints, attackDamage) << std::endl;
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

ClapTrap::ClapTrap(str name)
{
	this->name = name;
	hitpoints = $HITPOINTS;
	energyPoints = $ENERYPOINTS;
	attackDamage = $ATTACKDAMAGE;
	//std::cout << name << $SPAWN(hitpoints, energyPoints, attackDamage) << std::endl;
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << __PRETTY_FUNCTION__<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << $DAMAGE_MSG(amount) << std::endl;
	hitpoints -= amount;
	if (hitpoints < 0)
		hitpoints = 0;
}

void	ClapTrap::attack(str const & target)
{
	std::cout << name << $ATTACK_MSG(target) << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > hitpoints)
		std::cout << $REPAIR(name) << std::endl;
	else
		std::cout << name << " can survive few more rounds" << std::endl;
}
