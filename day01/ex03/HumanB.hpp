#include <iostream>
#include "./Weapon.hpp"
typedef std::string str;
class HumanB
{
	public:
		HumanB(str name, Weapon *w);
		HumanB(str name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon w);
	private:
		Weapon *w;
		Weapon elem;
		str name;
};

