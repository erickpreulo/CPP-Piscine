#include "Array.hpp"

template <typename T>
Array<T>::Array():
 _arr(new T[0]), _size(0) {
	std::cout << "Default Array constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array() {
	std::cout << "Array Destructor called" << std::endl;
	delete[] _arr;
}

template <typename T>
Array<T>::Array( unsigned int n )
: _arr(new T[n]), _size(n) {
	std::cout << "Custom Array constructor called" << std::endl;
}

template <typename T>
Array<T>::Array( const Array & obj ) {
	std::cout << "Copy Array constructor called" << std::endl;
	_size = obj.size();
	_arr( new T[_size]);
	for ( int i = 0; i < _size; i++)
		_arr[i] = obj._arr[i];
}

template <typename T>
Array<T> & Array<T>::operator= ( const Array<T> &obj ) {
	std::cout << "Copy assigment Array operator called" << std::endl;
	if (this == &obj)
		return (*this);
	
	delete[] _arr;

	_size = obj.size();
	_arr = new T[_size];
	for ( int i = 0; i < _size; i++)
		_arr[i] = obj._arr[i];
	return (*this);
}

template <typename T>
T & Array<T>::operator[] ( unsigned int index ) {
	if (index >= _size)
		throw Array<T>::indexOutOfBounds();
	return (_arr[index]);
}

template <typename T>
unsigned int Array<T>::size() const {
	return (_size);
}

template <typename T>
char const * Array<T>::indexOutOfBounds::what() const throw() {
	return ("Index is out of bounds!");
}
