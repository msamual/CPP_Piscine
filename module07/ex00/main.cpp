# include "Whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;

	c = "world!!!";
	d = "Hello ";
	
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;

	float x = 2.386;
	float y = -3.19;
	
	swap( x, y );
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << max( x, y ) << std::endl;

	std::cout << std::endl;
	
	double i = 145.386;
	double j = -3.19;
	
	swap( i, j );
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << max( i, j ) << std::endl;
	
	return 0;
}