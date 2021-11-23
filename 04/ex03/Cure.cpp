#include "./Cure.hpp"

Cure::Cure(void) : AMateria()
{
	this->type = "cure";
	return ;
}

Cure::~Cure(void)
{
	
}

Cure::Cure(const Cure & src) : AMateria()
{
	this->type = "cure";
	*this = src;
}

Cure &Cure::operator=(Cure const & src)
{
	return (*this);
}

AMateria *Cure::clone(void) const
{
	AMateria *ret = new Cure();
	return (ret);
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
