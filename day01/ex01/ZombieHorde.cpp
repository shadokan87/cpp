#include "./Zombie.hpp"
namespace ft{
str	itoa(int n)
{
	std::stringstream buff;

	buff << n;
	return (buff.str());
}

int	stoi(str elem)
{
	int	ret;

	std::istringstream(elem) >> ret;
	return (ret);
}}

Zombie* zombieHorde(int N, str name)
{
	Zombie *ret = new Zombie[N];

	for (int i = 0;i < N;i++)
		ret[i].setName(name + ft::itoa(i));
	return (ret);
}
