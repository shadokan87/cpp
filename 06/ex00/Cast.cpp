#include "./Cast.hpp"

Cast::Cast(void) {}
Cast::~Cast(void) {}
Cast::Cast(str elem)
{
	arg = elem;
	double elem2;
	std::stringstream ss;
	ss << elem;
	ss >> elem2;
	_int = static_cast<int>(elem2);
	_float = static_cast<float>(elem2);
	_char = static_cast<char>(elem2);
	_double = elem2;
}

Cast &Cast::operator=(Cast &src)
{
	this->_int = src._int;
	this->_float = src._float;
	this->_double = src._double;
	this->_char = src._char;
	this->arg = src.arg;
	return (*this);
}

void	Cast::print(void)
{
	if (isprint(_char))
		std::cout << "char: " << _char << std::endl;
	else
		std::cout << "char: Not printable." << std::endl;
	std::cout << "int: " << _int << std::endl;
	if (arg == "-inff" || arg == "+ inff" || arg == "nanf")
		std::cout << "float: " << arg << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
	if (arg == "-inf" || arg == "+ inf" || arg == "nan")
		std::cout << "double: " << arg << std::endl;
	else
		std::cout << "double: " << _double << std::endl;
}
