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
	this->fixedPoint = fixed.fixedPoint;
	return *this;
}


Fixed::Fixed(const int point){
	std::cout << "Int constructor called\n";
	this->fixedPoint = point << this->fraction;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called\n";

	this->fixedPoint = roundf(num * pow(2, this->fraction));
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->fixedPoint / pow(2, this->fraction));
}

int Fixed::toInt( void ) const
{
	return (this->fixedPoint / pow(2, this->fraction));
}

std::ostream& operator<<(std::ostream &cout, const Fixed& fixed){
	cout << fixed.toFloat();
	return cout;
}
