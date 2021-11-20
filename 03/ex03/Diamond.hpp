#ifndef DIAMOND_HPP
# define DIAMOND_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# define $NAME_EXPAND "_clap_name"

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

#endif
