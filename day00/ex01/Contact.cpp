#include "Contact.hpp"

contact::contact(void)
{
	return ;
}

void	contact::addInfo(int pos, str elem)
{
	if (pos < 8)
		info[pos] = elem;
	return ;
}
