#include <iostream>
typedef std::string str;
class	Weapon
{
	public:
		Weapon(str elem);
		Weapon(void);
		~Weapon(void);
		const str & getType(void);
		void	setType(str elem);
	private:
		str elem;
};
