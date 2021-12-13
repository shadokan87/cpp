#include <iostream>
#include "./Zombie.hpp"
typedef std::string str;
Zombie::Zombie(void)
{

}

Zombie::Zombie(str name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " has returned to dust." << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(str name)
{
	this->name = name;
    return ;
}