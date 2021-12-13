#include <iostream>
#include "./T_many_func.hpp"
typedef std::string str;

int	main(void)
{
	std::cout << max("a", "b") << std::endl;
	std::cout << min("a", "b") << std::endl;
	str A = "A";
	str B = "B";
	swap(A, B);
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	return (0);
}
