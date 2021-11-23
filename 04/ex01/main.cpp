#include <iostream>
#include <sstream>
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
		Brain(const Brain &src);
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
Brain::Brain(const Brain &src)
{
	*this = src;
}
//--- CLASS ANIMAL ----
class Animal
{
	private:
		str type;
	public:
		virtual	~Animal(void);
		Animal &operator=(Animal &src);
		Animal(void);
		virtual void makeSound(void);
		virtual str getType(void);
};

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
//--- CLASS CAT ----
class Cat : public virtual Animal
{
	private:
		str type;
		Brain *myBrain;
	public:
		virtual	~Cat(void);
		Cat &operator=(Cat &src);
		void	makeSound(void);
		str		getType(void);
		Cat(void);
};

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
//--- CLASS DOG ----
class Dog : public virtual Animal
{
	private:
		str type;
		Brain *myBrain;
	public:
		virtual	~Dog(void);
		Dog &operator=(Dog &src);
		void	makeSound(void);
		str		getType(void);
		Dog(void);
};

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

namespace ft{
str	itoa(int n)
{
	std::stringstream buff;

	buff << n;
	return (buff.str());
}

int	stoi(str elem)
{
	int	ret;

	std::istringstream(elem) >> ret;
	return (ret);
}}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: <N>" << std::endl;
		return (0);
	}
	int	 size = ft::stoi(argv[1]); 
	Animal *arr[size];
	std::cout << COLOR(CYAN, "---- Populating array ----") << std::endl;
	for (int i = 0;i < (size / 2);i++)
		arr[i] = new Cat;
	for (int i = size / 2;i < size;i++)
		arr[i] = new Dog;
	std::cout << COLOR(CYAN, "---- Deleting array ----") << std::endl;
	for (int i = 0;i < size;i++)
	{
		Animal *current = arr[i];
		delete current;
	}
	std::cout << COLOR(CYAN, "---- Deep copy ----") << std::endl;
	Dog B;
	Dog A;
	A = B;
	return (0);
}
