#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
typedef std::string str;
class Animal
{
	private:
		str type;
	public:
		virtual	~Animal(void);
		Animal(void);
		virtual void makeSound(void);
		virtual str getType(void);
};
#endif
