/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:06:13 by egomes            #+#    #+#             */
/*   Updated: 2022/05/03 17:56:05 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <iomanip>

class Scalar {
	private:
		double _type;
		std::string _input;
	public:
		Scalar( std::string );
		Scalar( const Scalar &obj );
		Scalar &	operator= ( const Scalar &obj );
		~Scalar();

		std::string	getInput() const ;
	
		bool	isChar() const ;
		bool	isInt() const ;
		bool	isFloat() const ;
		bool	isDouble() const ;
		bool	isPseudo() const ;
		bool	isPseudoF() const ;

		void	getType() ;
	
		void	convertChar() const ;
		void	convertInt() const ;
		void	convertFlow() const ;
		void	convertDouble() const ;
	
		void	convert() const ;
};

std::ostream & operator<< (std::ostream & o, Scalar const & scalar);

#endif
