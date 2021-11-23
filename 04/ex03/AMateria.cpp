#include "./AMateria.hpp"
AMateria::AMateria(str const & type)
{
	this->type = type;
}

AMateria::AMateria(void)
{
	type = "AMateria";
}

AMateria::~AMateria(void)
{

}

const str &AMateria::getType(void) const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "unkown Materia used on: " << target.getName();
}

AMateria &AMateria::operator=(AMateria const & src)
{
	this->type = src.type;
	return (*this);
}
