#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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
	std::cout << "Int constructor by copy called" << std::endl;
	this->elem = elem << bits;
}

Fixed::Fixed(float elem)
{
	std::cout << "Float constructor by copy called" << std::endl;
	this->elem = (int)(roundf(elem * (1 << bits)));
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << __FUNCTION__ << " called" << std::endl;
	elem = src.elem;
	return (*this);
}


std::ostream &operator<<(std::ostream &ostream, const Fixed &src)
{
	ostream << src.toFloat();
	return (ostream);
}

float	Fixed::toFloat(void) const
{
	return ((float)elem / (float)(1 << bits));
}

int	Fixed::toInt(void) const
{
	return (elem >> bits);
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
