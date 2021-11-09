#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
#include "Contact.hpp"

class Phonebook
{
	private:
		contact contacts[8];
		int pos;
	public:
		Phonebook(void);
		contact *getContact(int index);
		void	setPos(int pos);
		int		getPos(void);
};
