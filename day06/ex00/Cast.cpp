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
	bool one = (arg == "-inff" || arg == "+ inff" || arg == "nanf");
	bool two = (arg == "-inf" || arg == "+ inf" || arg == "nan");
	if (isprint(_char) && !one && !two)
		std::cout << "char: " << _char << std::endl;
	else if (!one && !two)
		std::cout << "char: Not printable." << std::endl;
	else
		std::cout << "char: impossible." << std::endl;
	// -----
	if (!one && !two)
		std::cout << "int: " << _int << std::endl;
	else
		std::cout << "int: impossible." << std::endl;
	// -----
	if (one)
		std::cout << "float: " << arg << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
	// -----
	if (two)
		std::cout << "double: " << arg << std::endl;
	else
		std::cout << "double: " << _double << std::endl;
}
