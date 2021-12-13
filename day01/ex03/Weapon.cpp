#include "./Weapon.hpp"
#include <iostream>
typedef std::string str;
Weapon::Weapon(void)
{

}

Weapon::Weapon(str elem)
{
	setType(elem);
}

Weapon::~Weapon(void)
{

}

const str &Weapon::getType(void)
{
	const str &ret = this->elem;
	return (ret);
}


void	Weapon::setType(str elem)
{
	this->elem = elem;
	return ;
}

