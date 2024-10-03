#include "Fixed.hpp"

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(void) : _value(0), _bits(8) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &to_copy) : _value(to_copy._value), _bits(to_copy._bits) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed &to_copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = to_copy._value;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}
