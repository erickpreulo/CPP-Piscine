/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:22:27 by egomes            #+#    #+#             */
/*   Updated: 2022/04/04 18:13:57 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int i ) {
	std::cout << "Int constructor called" << std::endl;
	_fpNbr = i * pow(2, _fracBits);
}

Fixed::Fixed( const float f ) {
	std::cout << "Float constructor called" << std::endl;
	_fpNbr = roundf(f * pow(2, _fracBits));
}

Fixed::Fixed( const Fixed &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &	Fixed::operator= ( const Fixed &obj ) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &obj)
		_fpNbr = obj.getRawBits();
	return(*this);
}

std::ostream & operator<< (std::ostream & o, Fixed const & obj) {
	o << obj.toFloat();
	return (o);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (_fpNbr);
}

void Fixed::setRawBits(int const raw) {
	_fpNbr = raw;
}

float	Fixed::toFloat( void ) const {
	return (_fpNbr / pow(2, _fracBits));
}

int		Fixed::toInt( void ) const {
	return (_fpNbr / pow(2, _fracBits));
}
