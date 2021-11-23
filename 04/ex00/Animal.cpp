#include "./Animal.hpp"

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

