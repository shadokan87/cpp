#ifndef CAT_HPP
# define CAT_HPP
#include "./Animal.hpp"
#include <iostream>
#include <sstream>
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET
#define _TAB(x) "\t";x
typedef std::string str;
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
#endif
