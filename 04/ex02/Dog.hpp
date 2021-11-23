#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include <sstream>
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET
#define _TAB(x) "\t";x
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
#endif
