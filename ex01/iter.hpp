#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename T>
void	iter(T *array, unsigned int size, void	fct(T &t)){
	for(unsigned int i = 0; i < size; i++){
		fct(array[i]);
	}
}

template <typename T>
void	print(T &a){
	std::cout << "element = " << a << std::endl;
}

template <typename T>
void	printbis(T &a){
	std::cout << a << " = " << a << std::endl;
}

#endif