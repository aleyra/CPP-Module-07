#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>
# include <sstream>

template <typename T>
void	swap(T & a, T & b){
	std::cout << "swap fct called\n";
	T	tmp = a;

	a = b;
	b = tmp;
}

template <typename U>
U const &	min(U const & a, U const &b){
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T const &	max(T const & a, T const &b){
	if (a > b)
		return (a);
	return (b);
}

//for correction
class Awesome{
public:
	Awesome(void):_n(0){}
	Awesome(int n):_n(n){}
	Awesome(Awesome const &src) {this->_n = src._n;}//ajouté car error sinon
	Awesome & operator=(Awesome & a){_n = a._n; return *this; }
	bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const & rhs) const { return(this->_n > rhs._n); }
	bool operator<(Awesome const & rhs) const { return(this->_n < rhs._n);}
	bool operator>=(Awesome const & rhs) const { return(this->_n >= rhs._n); }
	bool operator<=(Awesome const & rhs) const { return(this->_n <= rhs._n);}
	int get_n() const{return _n;}
private:
	int	_n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a){ o << a.get_n(); return o;}

#endif