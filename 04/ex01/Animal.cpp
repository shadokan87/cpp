#include "./Animal.hpp"
typedef std::string str;
Animal &Animal::operator=(Animal &src)
{
	type = src.type;
	return (*this);
}

Animal::Animal(void) { type = "Animal"; }

Animal::~Animal(void) {}

str		Animal::getType(void)
{
	return (type);
}

void	Animal::makeSound(void)
{
	std::cout << "Unkown Animal sound" << std::endl;
}

