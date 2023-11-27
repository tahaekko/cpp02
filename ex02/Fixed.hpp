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
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;
	//arethmetic
	Fixed operator+(const Fixed& fixed) const;
	Fixed operator-(const Fixed& fixedd) const;
	Fixed operator*(const Fixed& fixedd) const;
	Fixed operator/(const Fixed& fixedd) const;

	//increament decreament
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	//static
	static Fixed& min(Fixed &fix1, Fixed &fix2);
	static const Fixed& min(const Fixed &fix1, const Fixed& fix2);

	static Fixed& max(Fixed &fix1, Fixed &fix2);
	static const Fixed& max(const Fixed &fix1, const Fixed& fix2);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream &cout, const Fixed& fixed);
