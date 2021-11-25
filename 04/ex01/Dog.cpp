#include "./Dog.hpp"
Dog	&Dog::operator=(Dog &src)
{
	delete myBrain;
	myBrain = new Brain(*src.myBrain);
	std::cout << COLOR(YELLOW, "Current Brain address: ") << &myBrain << std::endl;
	std::cout << COLOR(YELLOW, "Source Brain address: ") << &(*src.myBrain) << std::endl;
	type = src.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__) << std::endl;
	delete myBrain;
}

Dog::Dog(void) : Animal()
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__) << std::endl;
	this->type = "Dog";
	this->myBrain = new Brain;
}

str		Dog::getType(void)
{
	return (type);
}

void	Dog::makeSound(void)
{
	std::cout << "Who let the dogs out ?!" << std::endl;
}

