#include "ClapTrap.hpp"
#define $DAMAGE_MSG(amount) " took " << amount << " of damage !"
#define $ATTACK_MSG(target) " attacks " << target << " dealing: " << attackDamage
#define $REPAIR(name) name << " needs to be repaired !"
#define $SPAWN(h, e, a) " has spawned " << h << ":" << e << ":" << a
#define $HITPOINTS 10
#define $ENERYPOINTS 10
#define $ATTACKDAMAGE 0

typedef std::string str;

ClapTrap::ClapTrap() : name(""), hitpoints($HITPOINTS), energyPoints($ENERYPOINTS), attackDamage($ATTACKDAMAGE) 
{
	std::cout << name << $SPAWN(hitpoints, energyPoints, attackDamage) << std::endl;
}

ClapTrap::ClapTrap(str name)
{
	this->name = name;
	hitpoints = $HITPOINTS;
	energyPoints = $ENERYPOINTS;
	attackDamage = $ATTACKDAMAGE;
	std::cout << name << $SPAWN(hitpoints, energyPoints, attackDamage) << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &src)
{
	name = src.name;
	hitpoints = src.hitpoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << name <<  " has left" << std::endl;
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
