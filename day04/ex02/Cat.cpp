#include "./Cat.hpp"
Cat	&Cat::operator=(Cat &src)
{
	delete myBrain;
	myBrain = new Brain(*src.myBrain);
	std::cout << COLOR(YELLOW, "Current Brain address: ") << &myBrain << std::endl;
	std::cout << COLOR(YELLOW, "Source Brain address: ") << &(*src.myBrain) << std::endl;
	type = src.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__) << std::endl;
	delete myBrain;
}

Cat::Cat(void) : Animal()
{
	std::cout << COLOR(YELLOW, __PRETTY_FUNCTION__) << std::endl;
	this->type = "Cat";
	this->myBrain = new Brain;
}

str		Cat::getType(void)
{
	return (type);
}

void	Cat::makeSound(void)
{
	std::cout << "Miaaaw I am a cat ... Yes it's true" << std::endl;
}

