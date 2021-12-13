#include <iostream>
#include <stdint.h>
struct Data
{
	int	elem;
};

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data one;
	one.elem = 42;
	uintptr_t serialized = serialize(&one);
	Data *two = Deserialize(serialized);
	std::cout << two->elem << std::endl;
}
