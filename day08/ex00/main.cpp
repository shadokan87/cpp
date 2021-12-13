#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
#include <exception>
typedef std::string str;

class	Error404 : public std::exception
{
	const char *what() const throw()
	{
		return ("Not found.");
	}
};

template <typename T> void	easyfind(T &ref, int to_find)
{
	typename T::iterator begin = ref.begin();
	typename T::iterator end = ref.end();

	while (begin != end && *begin != to_find)
			begin++;
	if (begin == end)
		throw Error404();
}
namespace ft{
int	stoi(str elem)
{
	std::stringstream ss;
	int	ret;
	ss << elem;
	ss >> ret;
	return (ret);
}
}
int	main(int	argc, char **argv)
{
	if (argc < 3)
	{
		std::cout << "Usage: <numbers . . .> <to_find>";
		return (0);
	}
	// ----
	std::vector<int> vec;
	int	i = 1;
	while (i < argc - 1)
	{
		vec.push_back(ft::stoi(static_cast<str>(argv[i])));
		i++;
	}
	std::vector<int>::iterator begin = vec.begin();
	std::vector<int>::iterator end = vec.end();
		try{
			easyfind(vec, ft::stoi(static_cast<str>(argv[argc - 1])));
			std::cout << "OK" << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cout << "KO" << std::endl;
		}
	return (0);
}
