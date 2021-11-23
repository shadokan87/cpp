#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "./Animal.hpp"
typedef std::string str;
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
#endif
