#include "Phonebook.hpp"

Phonebook::Phonebook(void) : pos(0)
{
}

contact *Phonebook::getContact(int index)
{
	contact *ptr;

	ptr = &contacts[index];
	return (ptr);
}

void	Phonebook::setPos(int newPos)
{
	this->pos = newPos;
	return ;
}

int		Phonebook::getPos(void)
{
	return (this->pos);
}
