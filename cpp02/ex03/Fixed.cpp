/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:22:27 by egomes            #+#    #+#             */
/*   Updated: 2022/04/04 21:57:31 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fpNbr(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int i ) {
	//std::cout << "Int constructor called" << std::endl;
	_fpNbr = i * pow(2, _fracBits);
}

Fixed::Fixed( const float f ) {
	//std::cout << "Float constructor called" << std::endl;
	_fpNbr = roundf(f * pow(2, _fracBits));
}

Fixed::Fixed( const Fixed &obj ) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &	Fixed::operator= ( const Fixed &obj ) {
	//std::cout << "Copy assigment operator called" << std::endl;
	if (this != &obj)
		_fpNbr = obj.getRawBits();
	return(*this);
}

std::ostream & operator<< (std::ostream & o, Fixed const & obj) {
	o << obj.toFloat();
	return (o);
}

// comparison operators
bool	Fixed::operator> ( const Fixed &obj ) const {
	//std::cout << "Comparison operator ">" called" << std::endl;
	return (_fpNbr > obj.getRawBits());
}

bool	Fixed::operator< ( const Fixed &obj ) const {
	//std::cout << "Comparison operator "<=" called" << std::endl;
	return (_fpNbr < obj.getRawBits());
}

bool	Fixed::operator>= ( const Fixed &obj ) const {
	//std::cout << "Comparison operator ">=" called" << std::endl;
	return (_fpNbr >= obj.getRawBits());
}

bool	Fixed::operator<= ( const Fixed &obj ) const {
	//std::cout << "Comparison operator "<=" called" << std::endl;
	return (_fpNbr <= obj.getRawBits());
}

bool	Fixed::operator== ( const Fixed &obj ) const {
	//std::cout << "Comparison operator "==" called" << std::endl;
	return (_fpNbr == obj.getRawBits());
}

bool	Fixed::operator!= ( const Fixed &obj ) const {
	//std::cout << "Comparison operator "!=" called" << std::endl;
	return (_fpNbr != obj.getRawBits());
}

// arithmetic operators
Fixed	Fixed::operator+ ( const Fixed &obj ) const {
	//std::cout << "Arithmetic operator "+" called" << std::endl;
	return ((this->toFloat() + obj.toFloat()));
}

Fixed	Fixed::operator- ( const Fixed &obj ) const {
	//std::cout << "Arithmetic operator "-" called" << std::endl;
	return ((this->toFloat() - obj.toFloat()));
}

Fixed	Fixed::operator* ( const Fixed &obj ) const {
	//std::cout << "Arithmetic operator "*" called" << std::endl;
	return ((this->toFloat() * obj.toFloat()));
}

Fixed	Fixed::operator/ ( const Fixed &obj ) const {
	//std::cout << "Arithmetic operator "/" called" << std::endl;
	return ((this->toFloat() / obj.toFloat()));
}

// increment/decrement operators
Fixed	&	Fixed::operator++ () {
	//std::cout << "Pre increment operator called" << std::endl;
	_fpNbr++;
	return (*this);
}

Fixed	Fixed::operator++ (int) {
	//std::cout << "Pos increment operator called" << std::endl;
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed	&	Fixed::operator-- () {
	//std::cout << "Pre decrement operator called" << std::endl;
	_fpNbr--;
	return (*this);
}

Fixed	Fixed::operator-- (int) {
	//std::cout << "Pos decrement operator called" << std::endl;
	Fixed temp = *this;
	--*this;
	return (temp);
}

// overload member functions
const	Fixed	& Fixed::max (const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max (Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const	Fixed	& Fixed::min (const Fixed &a, const Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::min (Fixed &a, Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

// functions
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
