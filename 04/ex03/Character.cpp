#include "./Character.hpp"
void	Character::equip(AMateria *m)
{
	if (m && pos != 4)
	{
		arr[pos] = m;
		pos++;
	}
}

void	Character::unequip(int idx)
{
	if (pos >= 0 && pos < 4)
	{
		arr[idx] = NULL;
		pos--;
	}
}

Character &Character::operator=(const Character & src)
{
	_for_each(arr, pos, if (tab[_]), delete arr[_]);
	_for_each(arr, src.pos, true, arr[_] = src.arr[_]->clone());
	name = src.name;
	pos = src.pos;
	return (*this);
}

Character::Character(const Character & src)
{
	_for_each(arr, src.pos, true, arr[_] = src.arr[_]->clone());
	name = src.name;
	pos = src.pos;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && arr[idx])
		arr[idx]->use(target);
}

const str &Character::getName(void) const
{
	return (name);
}

Character::~Character(void)
{
	_for_each(arr, 4, arr[_], delete arr[_]);
}

Character::Character(void) : pos(0)
{
	_for_each(arr, 4, true, arr[_] = NULL);
}

Character::Character(str name)
{
	_for_each(arr, 4, true, arr[_] = NULL);
	this->name = name;
	pos = 0;
}
