/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:20:57 by egomes            #+#    #+#             */
/*   Updated: 2022/03/29 21:20:49 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fpNbr = 0;
}

Fixed::Fixed( const Fixed &obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &	Fixed::operator=( const Fixed &obj ) {
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &obj)
		_fpNbr = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(_fpNbr);
}

void	Fixed::setRawBits( int const raw ) {
	_fpNbr = raw;
}
