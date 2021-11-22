#include "./Ice.hpp"

Ice::Ice(void) : AMateria()
{
	this->type = "ice";
	return ;
}

Ice::~Ice(void)
{
	
}

Ice::Ice(const Ice & src) : AMateria()
{
	this->type = "ice";
	*this = src;
}

Ice &Ice::operator=(Ice const & src)
{
	return (*this);
}

AMateria *Ice::clone(void) const
{
	AMateria *ret = new Ice();
	return (ret);
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
