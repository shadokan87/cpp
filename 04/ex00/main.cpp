#include <iostream>
#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET
#define _TAB(x) "\t";x

typedef std::string str;
/*
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

class Cat : public virtual Animal
{
	private:
		str type;
	public:
		virtual	~Cat(void);
		void	makeSound(void);
		str		getType(void);
		Cat(void);
};

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
class Dog : public virtual Animal
{
	private:
		str type;
	public:
		virtual	~Dog(void);
		void	makeSound(void);
		str		getType(void);
		Dog(void);
};

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
*/
int	main(void)
{
	Animal A;
	Animal *ptr;
	Animal *ptr2;
	Cat B;
	Dog C;

	ptr = &B;
	ptr2 = &C;
	std::cout << COLOR(GREEN, "MakeSound functions: ") << std::endl;
	std::cout << _TAB(A.makeSound());
	std::cout << _TAB(B.makeSound());
	std::cout << _TAB(C.makeSound());
	std::cout << COLOR(GREEN, "getType functions: ") << std::endl;
	std::cout << "\t" << A.getType() << std::endl;
	std::cout << "\t" << B.getType() << std::endl;
	std::cout << "\t" << C.getType() << std::endl;
	std::cout << COLOR(GREEN, "getType from pointer: ") << std::endl;
	std::cout << "\t" << ptr->getType() << std::endl;
	std::cout << "\t" << ptr2->getType() << std::endl;
	return (0);
}
