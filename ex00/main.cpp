#include "whatever.hpp"

int	main( void ) {
	{
		int a = 2;
		int b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;//ajouté pour + de clarté
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << "c = " << c << ", d = " << d << std::endl;//ajouté pour + de clarté
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	//for correction

	{
		Awesome a(2), b(4);

		std::cout << "a = " << a << ", b = " << b << std::endl;//ajouté pour + de clarté
		swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;//modifié pour + de clarté
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;//modifié pour + de clarté
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;//modifié pour + de clarté
	}

	return 0;
}