#include "Diamond.hpp"
/*
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#define $NAME_EXPAND "_clap_name"

typedef std::string str;
class	Diamond : virtual public FragTrap, virtual public ScavTrap
{
	protected:
		int	hitpoints;
		int	energyPoints;
		int	attackDamage;
	private:
		str name;
	public:
		Diamond(str name);
		Diamond(void);
		int	debug(int n);
		void	whoami(void);
		Diamond &operator=(const Diamond &src);
		~Diamond(void);
};

int	Diamond::debug(int n)
{
	switch (n)
	{
		case 0:
			return (Diamond::hitpoints);
		case 1:
			return (Diamond::energyPoints);
		case 2:
			return (Diamond::attackDamage);
	}
}

Diamond &Diamond::operator=(const Diamond &src)
{
	name = src.name;
	hitpoints = src.hitpoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	return (*this);
}

Diamond::Diamond(str name) : name(name), FragTrap(name + $NAME_EXPAND), ScavTrap(name)
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__) << std::endl;
	hitpoints = FragTrap::hitpoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

Diamond::Diamond()
{
	std::cout << COLOR(GREEN,  __PRETTY_FUNCTION__) << std::endl;
}

Diamond::~Diamond()
{
	std::cout << COLOR(GREEN, __PRETTY_FUNCTION__ ) << std::endl;
}

void	Diamond::whoami()
{
	std::cout << "My name: " << name << std::endl << "ClapTrap name: " << FragTrap::name << std::endl;
}
*/
int	main(void)
{
	std::cout << COLOR(CYAN, "---- CONSTRUCTOR CALLS ----") << std:: endl;
	Diamond d("ROMEO");
	std::cout << COLOR(YELLOW, "---- DIAMONTRAP ----") << std:: endl;
	std::cout << COLOR(CYAN, "Function inherited:") << std::endl;
	std::cout << COLOR(GREEN, "\t[S]Attack function: ");d.ScavTrap::attack("test");
	std::cout << COLOR(GREEN, "\t[S]Special: ");d.ScavTrap::guardGate();
	std::cout << COLOR(GREEN, "\t[F]Special: ");d.FragTrap::highFivesGuys();
	std::cout << COLOR(CYAN, "Values inherited: ") << std::endl;
	std::cout << COLOR(GREEN, "\t[F]hitpoints: ") << d.debug(0) << std::endl;
	std::cout << COLOR(GREEN, "\t[F]attackDamage: ") << d.debug(1) << std::endl;
	std::cout << COLOR(GREEN, "\t[S]energyPoints: ") << d.debug(2) << std::endl;
	std::cout << COLOR(CYAN, "Whoami function: ") << std::endl;d.whoami();
	std::cout << COLOR(CYAN, "---- DESTRUCTOR CALLS ----") << std:: endl;
	return (0);
}
