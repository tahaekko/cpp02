#include <iostream>

class Fixed{
private :
	int fixedPoint;
	static const int fraction = 8;
public :
	Fixed();
	Fixed(const Fixed& fix);
	~Fixed();
	Fixed&	operator= (const Fixed& fixed);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};
