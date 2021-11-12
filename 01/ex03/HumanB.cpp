#include <iostream>
#include "./HumanB.hpp"
typedef std::string str;
void	HumanB::setWeapon(Weapon w)
{
	this->elem = w;
	this->w = &this->elem;
	return ;
}

HumanB::HumanB(str name) : name(name), w(NULL)
{

}

HumanB::HumanB(str name, Weapon *w) : name(name), w(w)
{

}

HumanB::~HumanB(void)
{

}

void	HumanB::attack(void)
{
	if (w)
	{
		std::cout
		<< name << " attacks with his "
		<< w->getType()
		<< std::endl;
	}
	else
	{
		std::cout
		<< name << " spits at his opponent since he has no weapon " << std::endl;
	}
}
