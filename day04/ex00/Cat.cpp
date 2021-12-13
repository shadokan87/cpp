#include "./Cat.hpp"
Cat::~Cat(void) {}

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
}

str		Cat::getType(void)
{
	return (type);
}

void	Cat::makeSound(void)
{
	std::cout << "Miaaaw I am a cat ... Yes it's true" << std::endl;
}

