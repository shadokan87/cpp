#include "ClapTrap.hpp"

typedef std::string str;

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(str name);
		virtual ~ScavTrap(void);
		void	guardGate(void);
	private:
		bool guard;
};
