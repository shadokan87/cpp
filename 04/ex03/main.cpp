#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"
#include "./MateriaSource.hpp"
#include "./ICharacter.hpp"
#include "./Character.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"

int	main(void)
{
IMateriaSource* src = new MateriaSource();
Ice *A = new Ice();
Cure *B = new Cure();
src->learnMateria(A);
src->learnMateria(B);
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
delete A;
delete B;
return 0;
}
