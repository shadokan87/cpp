#include "./Dog.hpp"

Dog::~Dog(void) {}

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
}

str		Dog::getType(void)
{
	return (type);
}

void	Dog::makeSound(void)
{
	std::cout << "Who let the dogs out ?!" << std::endl;
}
