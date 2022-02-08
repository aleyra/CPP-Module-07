#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array{
public:
	Array(){
		this->_ptr = NULL;
		this->_length = 0;
	}

	Array(Array const &src){
		this->_ptr = NULL;
		this->_length = 0;
		*this = src;
	}

	Array(unsigned int n){
		this->_length = n;
		this->_ptr = NULL;
		if (n == 0)
			return ;
		this->_ptr = new T[n];
	}

	virtual ~Array(){
		if (this->_length != 0)
			delete this->_ptr;
	}

	Array	&operator=(Array const &src){
		if (this->_length != 0){
			delete this->_ptr;
		}
		this->_length = src._length;
		this->_ptr = new T[src._length];
		for (int i = 0; i < src._length; i++){
			this->_ptr[i] =  src._ptr[i];
		}
		return (*this);
	}

	T	&operator[](int i){
		if(i >= this->_length || i < 0)
			throw std::exception();
		return(this->_ptr[i]);
	}

	const T	&operator[](int i) const{
		if(i >= this->_length || i < 0)
			throw std::exception();
		return(this->_ptr[i]);
	}

	unsigned int const	&size(){
		return (this->_length);
	}

protected:

private:
	int	_length;
	T*	_ptr;

};

#endif