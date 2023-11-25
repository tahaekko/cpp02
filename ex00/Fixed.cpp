#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& fix){
	std::cout << "Copy constructor called\n";
	*this = fix;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

void Fixed::setRawBits( int const raw ){
	this->fixedPoint = raw;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

Fixed& Fixed::operator=(const Fixed& fixed){
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = fixed.getRawBits();
	return *this;
}
