#include <iostream>
#include <sstream>
typedef std::string str;

class Zombie
{
	private:
		str name;
	public:
		void	announce(void);
		void	setName(str name);
		Zombie(void);
		Zombie(str name);
		~Zombie(void);
};
namespace ft{
str	itoa(int n);
int	stoi(str elem);
}
Zombie* newZombie(str name);
Zombie* zombieHorde(int N, str name);
