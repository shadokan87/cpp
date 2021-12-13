#include "DiamondTrap.hpp"
int	main(void)
{
	std::cout << COLOR(CYAN, "---- CONSTRUCTOR CALLS ----") << std:: endl;
	DiamondTrap d("ROMEO");
	std::cout << COLOR(YELLOW, "---- DIAMONTRAP ----") << std:: endl;
	std::cout << COLOR(CYAN, "Function inherited:") << std::endl;
	std::cout << COLOR(GREEN, "\t[S]Attack function: ");d.ScavTrap::attack("test");
	std::cout << COLOR(GREEN, "\t[S]Special: ");d.ScavTrap::guardGate();
	std::cout << COLOR(GREEN, "\t[F]Special: ");d.FragTrap::highFivesGuys();
	std::cout << COLOR(CYAN, "Values inherited: ") << std::endl;
	std::cout << COLOR(GREEN, "\t[F]hitpoints: ") << d.debug(0) << std::endl;
	std::cout << COLOR(GREEN, "\t[F]attackDamage: ") << d.debug(1) << std::endl;
	std::cout << COLOR(GREEN, "\t[S]energyPoints: ") << d.debug(2) << std::endl;
	std::cout << COLOR(CYAN, "Whoami function: ") << std::endl;d.whoAmI();
	std::cout << COLOR(CYAN, "---- DESTRUCTOR CALLS ----") << std:: endl;
	return (0);
}
