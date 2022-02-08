#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <sstream>

template <typename T>
void	iter(T *array, unsigned int size, void	fct(T &t)){
	for(unsigned int i = 0; i < size; i++){
		fct(array[i]);
	}
}

template <typename T>
void	print1(T &a){
	std::cout << "element = " << a << std::endl;
}

template <typename T>
void	printbis(T &a){
	std::cout << a << " = " << a << std::endl;
}

//for correcetion

class Awesome{
public:
Awesome(void):_n(42){return;}
int get(void) const { return this->_n; }
private:
int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs){o << rhs.get(); return o;}

template <typename T>
void print(T & x){std::cout << x << std::endl; return;}//const enlevé de l'arg car ne compil pas bizzarement

#endif