#include <iostream>
#include <exception>
#include "./Array.hpp"

int	main(int	argc, char **argv)
{
	Array<int> A(5);
	for (int i = 0;i < A.size();i++)
		A[i] = i;
	for (int i = 0;i < A.size();i++)
		std::cout << A[i] << "  ";
	std::cout << std::endl;
	int	range = 10;
	try{
		std::cout << A[range] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "index was out of range: " << range<< std::endl;
	}
	range = 6;
	try{
		std::cout << A[range] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "index was out of range: " << range<< std::endl;
	}
	range = -1;
	try{
		std::cout << A[range] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "index was out of range: " << range<< std::endl;
	}
	range = 2;
	try{
		std::cout << "index is correct: " << range << std::endl;
		std::cout << A[range] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "index was out of range: " << range<< std::endl;
	}
	std::cout << "-----------" << std::endl;
	Array<str> B(argc);
	for (int i = 0;i < argc;i++)
		B[i] = argv[i];
	for (int i = 0;i < argc;i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	return (0);
}
