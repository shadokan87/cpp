#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : elem(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
}

Fixed::Fixed(int elem)
{
	std::cout << "constructor by copy called" << std::endl;
	this->elem = elem;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << __FUNCTION__ << " called" << std::endl;
	elem = src.elem;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << __FUNCTION__ << " called" << std::endl;
	return (elem);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << __FUNCTION__ << " called" << std::endl;
	elem = raw;
}

