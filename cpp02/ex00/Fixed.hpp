/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:20:57 by egomes            #+#    #+#             */
/*   Updated: 2022/03/29 21:16:28 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	private:
		int					_fpNbr;
		static const int	_fracBits = 8;

	public:
		Fixed();
		Fixed( const Fixed &obj );
		~Fixed();
		Fixed &	operator=( const Fixed &obj );
		int getRawBits( void ) const;
		void	setRawBits( int const raw );

};

#endif
