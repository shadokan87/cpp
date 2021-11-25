#include  "./Animal.hpp"
#include "./Brain.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
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

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: <N>" << std::endl;
		return (0);
	}
	int	 size = ft::stoi(argv[1]); 
	Animal *arr[size];
	std::cout << COLOR(CYAN, "---- Populating array ----") << std::endl;
	for (int i = 0;i < (size / 2);i++)
		arr[i] = new Cat;
	for (int i = size / 2;i < size;i++)
		arr[i] = new Dog;
	std::cout << COLOR(CYAN, "---- Deleting array ----") << std::endl;
	for (int i = 0;i < size;i++)
	{
		Animal *current = arr[i];
		delete current;
	}
	std::cout << COLOR(CYAN, "---- Deep copy ----") << std::endl;
	Dog B;
	Dog A;
	A = B;
	return (0);
}
