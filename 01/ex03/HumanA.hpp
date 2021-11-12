#include <iostream>
#include "./HumanB.hpp"
typedef std::string str;
class HumanA
{
	public:
		HumanA(str name, Weapon &w);
		~HumanA(void);
		void	attack(void);
	private:
		Weapon &w;
		str name;
};
