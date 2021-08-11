#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = fixed._value;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (roundf(n * (1 << this->_fractional_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed._value;
	return *this;
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << this->_fractional_bits);
}

int		Fixed::toInt(void) const
{
	return this->_value / (1 << this->_fractional_bits);
}