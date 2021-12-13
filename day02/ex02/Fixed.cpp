#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : elem(0)
{
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(int elem)
{
	this->elem = elem << bits;
}

Fixed::Fixed(float elem)
{
	this->elem = (int)(roundf(elem * (1 << bits)));
}

Fixed &Fixed::operator=(const Fixed &src)
{
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
	return (elem);
}

void	Fixed::setRawBits(int const raw)
{
	elem = raw; 
}
bool	Fixed::operator>(const Fixed &src) const
{
	return (this->elem > src.elem);
}

bool	Fixed::operator<(const Fixed &src) const
{
	return (this->elem < src.elem);
}

bool	Fixed::operator==(const Fixed &src) const
{
	return (this->elem == src.elem);
}

bool	Fixed::operator!=(const Fixed &src) const
{
	return (this->elem != src.elem);
}

bool	Fixed::operator>=(const Fixed &src) const
{
	return (this->elem >= src.elem);
}

bool	Fixed::operator<=(const Fixed &src) const
{
	return (this->elem <= src.elem);
}

Fixed Fixed::operator+(Fixed const &src)
{
	this->setRawBits(this->bits + src.getRawBits());
	return (*this);
}

Fixed Fixed::operator-(Fixed const &src)
{
	this->setRawBits(this->bits - src.getRawBits());
	return (*this);
}

Fixed Fixed::operator/(Fixed const &src)
{
	this->setRawBits((this->getRawBits() / src.getRawBits()) / (1 << this->bits));
	return (*this);
}

Fixed Fixed::operator*(Fixed const &src)
{
	this->setRawBits((this->getRawBits() * src.getRawBits()) / (1 << this->bits));
	return (*this);
}

Fixed Fixed::operator++(void)
{
	this->elem++;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->elem--;
	return (*this);
}

Fixed Fixed::operator--(int n)
{
	Fixed tmp = *this;operator--();
	return (tmp);
}

Fixed Fixed::operator++(int n)
{
	Fixed tmp = *this;operator++();
	return (tmp);
}


const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
