#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# define $NAME_EXPAND "_clap_name"

typedef std::string str;

class	DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	protected:
		int	hitpoints;
		int	energyPoints;
		int	attackDamage;
	private:
		str name;
	public:
		DiamondTrap(str name);
		DiamondTrap(void);
		int	debug(int n);
		void	whoAmI(void);
		DiamondTrap &operator=(const DiamondTrap &src);
		~DiamondTrap(void);
};

#endif
