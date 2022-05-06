#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {

private:
	T* _arr;
	unsigned int _size;
	
public:
	
	Array();
	~Array();
	Array( unsigned int n );
	Array( const Array & obj );
	Array & operator= ( const Array &obj );
	T & operator[] ( unsigned int index );

	unsigned int size() const ;

	class indexOutOfBounds : public std::exception {
		public:
			char const* what() const throw ();
	};
};

# include "Array.tpp"


#endif
