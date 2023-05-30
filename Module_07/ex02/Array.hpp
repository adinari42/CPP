 #ifndef ARRAY_HPP
 #define ARRAY_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>

template <typename T> class Array
{
	private:
		T *res;
		unsigned int arrSize_;
	public:
	Array (void) : arrSize_(0){
        res = new T[arrSize_];
	};
	Array (unsigned int s){
		if (s >= 1)
			arrSize_ = s;
		else
			throw std::invalid_argument("Array size must be greater than 0");
		res = new T[arrSize_];
	};
	Array (const Array &other) : arrSize_(other.arrSize_){
		res = NULL;
		*this = other;//calls assignment operator overload to do the rest;
	};
	~Array(void){
		std::cout << "deconstructor called!" << std::endl;
		if (res)
			delete[] res;
	}

	Array &operator=(const Array &other){
		if (res)
			delete[] res;
		res = new T[size()];
		for (int i = 0; i < size(); i++)
			res[i] = other.res[i];
		return (*this);
	};

	T &operator[](int);
	T &getRes(size_t i) const{
		return res[i];
	}
	unsigned int size(void) const{
		return arrSize_;
	}
	class IndexOutOfBonds : public std::exception {
			const char* what() const throw() {
				return "index out of bonds!";
		}
	};
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &arr)
{
	for (size_t i = 0; i < arr.size(); i++)
		os << std::setw(6) << arr.getRes(i);
	os << std::endl;
	return os;
}

template <typename T>
T& Array<T>::operator[](int index) {
	try{
		if (index >= size() || index < 0 )
			throw Array::IndexOutOfBonds();		
	}
	catch(std::exception & e){
		std::cout << e.what() << " : " << index << std::endl;
	}
	return res[index];
}


#endif