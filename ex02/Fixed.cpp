#include "Fixed.hpp"

Fixed::Fixed(){
	this->fixedPoint = 0;
}

Fixed::Fixed(const Fixed& fix){
	*this = fix;
}


Fixed::~Fixed(){
}

void Fixed::setRawBits( int const raw ){
	this->fixedPoint = raw;
}

int Fixed::getRawBits( void ) const{
	return (this->fixedPoint);
}

Fixed& Fixed::operator=(const Fixed& fixed){
	this->fixedPoint = fixed.fixedPoint;
	return *this;
}


Fixed::Fixed(const int point){
	this->fixedPoint = point << this->fraction;
}

Fixed::Fixed(const float num){
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


//comparison

bool Fixed::operator>(const Fixed& fixed) const
{
	const Fixed& fix = (const Fixed&)*this;
	return (fix.getRawBits() > fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const{
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed) const{
	return (this->getRawBits() == fixed.getRawBits());
}


bool Fixed::operator!=(const Fixed& fixed) const{
	return (this->getRawBits() != fixed.getRawBits());
}

//increment

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	this->fixedPoint++;
	return (tmp);
}

Fixed Fixed::operator++(){
	this->fixedPoint++;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	this->fixedPoint--;
	return tmp;
}

Fixed Fixed::operator--(){
	this->fixedPoint--;
	return (*this);
}

// arithmethic

Fixed Fixed::operator+(const Fixed& fixed) const {
	Fixed fx(this->toFloat() + fixed.toFloat());
	return fx;
}

Fixed Fixed::operator-(const Fixed& fixed) const {
	Fixed fx(this->toFloat() - fixed.toFloat());
	return fx;
}

Fixed Fixed::operator*(const Fixed& fixed) const {
	Fixed fx(this->toFloat() * fixed.toFloat());
	return fx;
}

Fixed Fixed::operator/(const Fixed& fixed) const {
	Fixed fx(this->toFloat() / fixed.toFloat());
	return fx;
}


//static

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2){
	if (fix1 < fix2)
		return fix1;
	return (fix2);
}

const Fixed& Fixed::min(const Fixed &fix1, const Fixed& fix2){
	if (fix1 < fix2)
		return fix1;
	return (fix2);
}

Fixed& Fixed::max(Fixed& fix1, Fixed& fix2){
	if (fix1 > fix2)
		return fix1;
	return (fix2);
}

const Fixed& Fixed::max(const Fixed &fix1, const Fixed& fix2){
	if (fix1 > fix2)
		return fix1;
	return (fix2);
}

