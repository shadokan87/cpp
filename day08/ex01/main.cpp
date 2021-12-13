#include <exception>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include "./span.hpp"
typedef std::string str;
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

int	main(int argc, char **argv)
{
	if (!(argc >= 2))
	{
		std::cerr << "Usage: <numbers . . .>" << std::endl;
		return (0);
	}
	span arr(argc - 1);
	for (int i = 1; i < argc; i++)
		arr.addNumber(ft::stoi(static_cast<str>(argv[i])));
	try{
		int ret = arr.shortestSpan();
		std::cout << "shortest Span found: " << ret << std::endl;
	}
	catch (const std::exception &e){
		std::cout << "shortest Span not found" << std::endl;
		std::cout << "what: " << e.what() << std::endl;
	}
	try{
		int ret2 = arr.longestSpan();
		std::cout << "longest Span found: " << ret2 << std::endl;
	}
	catch (const std::exception &e){
		std::cout << "longest Span not found" << std::endl;
		std::cout << "what: " << e.what() << std::endl;
	}
	return (0);
}

