#include "./MateriaSource.hpp"

MateriaSource::MateriaSource(void) : pos(0)
{
	_for_each(arr, 4, true, arr[_] = NULL);
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	_for_each(arr, 4, true, arr[_] = NULL);
	_for_each(arr, pos, arr[_], arr[_] = src.arr[_]->clone());
	this->pos = src.pos;
}

void	MateriaSource::learnMateria(AMateria* src)
{
	if (pos != 4)
	{
		arr[pos] = src;
		pos++;
	}
	return ;
}

AMateria*	MateriaSource::createMateria(str const & type)
{
	_for_each(arr, pos, (pos && arr[_]->getType() == type), return (arr[_]->clone()));
	return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	_for_each(arr, pos, arr[_], delete arr[_]);
	_for_each(arr, pos, true, arr[_] = src.arr[_]->clone());
	this->pos = src.pos;
	return (*this);
}
