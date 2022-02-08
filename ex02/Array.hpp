#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array{
public:
	Array(){
		this->_ptr = NULL;
		this->_lenght = 0;
	}

	Array(Array const &src){
		std::cout << "constructor by copy\n";//
		*this = src;
	}

	Array(unsigned int n){
		// std::cout << "constructor with n\n";//
		this->_lenght = n;
		this->_ptr = NULL;
		if (n == 0)
			return ;
		this->_ptr = new T[n];
	}

	virtual ~Array(){
		if (this->_lenght != 0)
			delete this->_ptr;
	}

	Array	&operator=(Array const &src){
		std::cout << "here we are\n";//
		if (this->_lenght != 0){
			std::cout << "born to be kings\n";//
			delete [] this->_ptr;
		}
		std::cout << "we're the princes of the universe\n";//
		this->_lenght = src._lenght;
		this->_ptr = new T[src._lenght];
		for (int i = 0; i < src._lenght; i++){
			this->_ptr[i] =  src._ptr[i];
		}
		return (*this);
	}

	T	&operator[](int i){
		if(i >= this->_lenght || i < 0)
			throw std::exception();
		// std::cout << "call of " << i <<"th element\n";//
		return(this->_ptr[i]);
	}

	const T	&operator[](int i) const{
		if(i >= this->_lenght || i < 0)
			throw std::exception();
		return(this->_ptr[i]);
	}

	unsigned int const	&size(){
		return (this->_lenght);
	}

protected:

private:
	int	_lenght;
	T*	_ptr;

};

#endif