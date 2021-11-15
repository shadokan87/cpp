#include "FragTrap.hpp"
#include "ScavTrap.hpp"

typedef std::string str;

class	Diamond : virtual public FragTrap, virtual public ScavTrap
{
	private:
		str name;
	public:
		Diamond(str name);
		virtual void	printName(void);
};

Diamond::Diamond(str name) : name(name +  "test")
{
	this->name = name;
}

void	Diamond::printName(void)
{
	std::cout << name << std::endl;
}

int	main(void)
{
	Diamond dia("diamond");
	dia.printName();
}
