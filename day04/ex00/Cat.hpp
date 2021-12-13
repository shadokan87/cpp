#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "./Animal.hpp"
typedef std::string str;
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
#endif
