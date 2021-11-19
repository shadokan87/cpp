#include <iostream>
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET
#define _TAB(x) "\t";x

typedef std::string str;

class	Brain
{
	private:
		str ideas[10];
	public:
		void	setIdea(str idea);
		str		*getIdea(void);
		Brain();
		~Brain();
};

void	Brain::setIdea(str idea)
{
	static int pos;

	if (pos == 10)
		pos = 0;
	ideas[pos] = idea;
	pos++;
}

str	*Brain::getIdea(void)
{
	return (this->ideas);
}
Brain::Brain(void) {}
Brain::~Brain(void) {}
//--- CLASS ANIMAL ----
class Animal
{
	private:
		str type;
		Brain *myBrain;
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
//--- CLASS CAT ----
class Cat : public virtual Animal
{
	private:
		str type;
		Brain *myBrain;
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
//--- CLASS DOG ----
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
