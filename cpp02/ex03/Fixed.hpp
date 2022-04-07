/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:22:27 by egomes            #+#    #+#             */
/*   Updated: 2022/04/04 21:59:07 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_fpNbr;
		static const int	_fracBits = 8;
	public:
		Fixed();
		Fixed( const int i );
		Fixed( const float f );
		Fixed( const Fixed &obj );
		~Fixed(); 
		Fixed &	operator= ( const Fixed &obj );

		// comparison operators
		bool operator> ( const Fixed &obj ) const ;
		bool operator< ( const Fixed &obj ) const ;
		bool operator>= ( const Fixed &obj ) const ;
		bool operator<= ( const Fixed &obj ) const ;
		bool operator== ( const Fixed &obj ) const ;
		bool operator!= ( const Fixed &obj ) const ;

		// arithmetic operators
		Fixed	operator+ ( const Fixed &obj ) const;
		Fixed	operator- ( const Fixed &obj ) const;
		Fixed	operator/ ( const Fixed &obj ) const;
		Fixed	operator* ( const Fixed &obj ) const;

		// increment/decrement operators
		Fixed	&	operator++ ();
		Fixed	operator++ (int);
		Fixed	&	operator-- ();
		Fixed	operator-- (int);

		// overload member functions
		static Fixed	&	min( Fixed &a, Fixed &b );
		static const	Fixed	&	min( const Fixed &a, const Fixed &b );
		static Fixed	&	max( Fixed &a, Fixed &b );
		static const	Fixed	&	max( const Fixed &a, const Fixed &b );

		// functions
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator<< (std::ostream & o, Fixed const & obj);

#endif
