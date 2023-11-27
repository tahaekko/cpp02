#include "Fixed.hpp"

int main()
{
	Fixed a(10);
	Fixed  const b( 5.2f );
	Fixed f(2);

	;

	operator<<(std::cout, (Fixed::max(a , b))) <<std::endl;
	operator<<(std::cout, f) <<std::endl;
}
