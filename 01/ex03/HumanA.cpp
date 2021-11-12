#include "./HumanA.hpp"
#include <iostream>
typedef std::string str;
HumanA::HumanA(str name, Weapon &w) : name(name), w(w)
{

}

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void)
{
	std::cout
	<< name << " attacks with his "
	<< w.getType()
	<< std::endl;
}
