#include "iter.hpp"
#include <cstdlib>
#include <cmath>

int	main(){
	{
		unsigned int	size = 10;
		int	array[size];

		for(unsigned int i = 0; i < size; i++){
			array[i] = rand() % 10;
		}

		::iter(array, size, ::print1);

		float arr[size];

		for(unsigned int i = 0; i < size; i++){
			arr[i] = rand() % 10;
		}

		::iter(arr, size, ::printbis);
	}
	//for correction
	{
		int tab[5];
		for (int i = 0; i < 5; i++){
			tab[i] = i;
		}
		Awesome tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);
	}

	return (0);
}