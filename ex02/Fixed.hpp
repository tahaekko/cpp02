#include <iostream>

class Fixed{
private :
	int fixedPoint;
	static const int fraction = 8;
public :
	Fixed();
	Fixed(const Fixed& fix);
	Fixed(const int point);
	Fixed(const float num);
	~Fixed();
	Fixed&	operator=(const Fixed& fixed);
	//comparison
	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed);
	bool operator>=(const Fixed& fixed);
	bool operator<=(const Fixed& fixed);
	bool operator==(const Fixed& fixed);
	//arethmetic
	Fixed& operator+(const Fixed& fixed);
	Fixed& operator-(const Fixed& fixed);
	Fixed& operator*(const Fixed& fixed);
	Fixed& operator/(const Fixed& fixed);

	Fixed& operator++();
	Fixed& operator++(int);
	Fixed& operator--();
	Fixed& operator--(int);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream &cout, const Fixed& fixed);
