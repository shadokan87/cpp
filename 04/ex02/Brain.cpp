#include "./Brain.hpp"

void	Brain::setIdea(str idea)
{
	static int pos;

	if (pos == 10)
		pos = 0;
	ideas[pos] = idea;
	pos++;
}

str	*Brain::getIdea(void)
{
	return (this->ideas);
}
Brain::Brain(void) {}
Brain::~Brain(void) {}
Brain::Brain(const Brain &src)
{
	*this = src;
}

