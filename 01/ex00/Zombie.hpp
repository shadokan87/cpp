#include <iostream>
typedef std::string str;
class Zombie
{
	private:
		str name;
	public:
		void	announce(void);
		Zombie(void);
		Zombie(str name);
		~Zombie(void);
};

Zombie* newZombie(str name);
void	randomChump(str name);
