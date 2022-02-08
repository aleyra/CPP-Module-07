#include "iter.hpp"
#include <cstdlib>
#include <cmath>

int	main(){

	unsigned int	size = 10;
	int	array[size];

	for(unsigned int i = 0; i < size; i++){
		array[i] = rand() % 10;
	}

	::iter(array, size, ::print);

	float arr[size];

	for(unsigned int i = 0; i < size; i++){
		arr[i] = rand() % 10;
	}

	::iter(arr, size, ::printbis);

	return (0);
}