#include <iostream>

typedef std::string str;

int	main(void)
{
	str elem = "HI THIS IS BRAIN.";
	str *ptr = &elem;
	str &ref = elem;

	std::cout << "String addres: " << &elem << std::endl;
	std::cout << "Strind addres via pointer: " << &(*ptr) << std::endl;
	std::cout << "Strind addres via ref: " << &ref << std::endl;

	std::cout << "String content via pointer: " << *ptr << std::endl;
	std::cout << "String content via ref: " << ref << std::endl;
	return (0);
}
