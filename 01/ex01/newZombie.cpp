#include <iostream>
#include "./Zombie.hpp"
typedef std::string str;
Zombie* newZombie(str name)
{
	Zombie *ret = new Zombie(name);
	return (ret);
}
