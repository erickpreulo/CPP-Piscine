/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:58:40 by egomes            #+#    #+#             */
/*   Updated: 2022/05/25 09:58:40 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private:
		std::vector<int>	_vector;
		unsigned int _limit;
	public:
		Span( unsigned int limit = 0 );
		Span( const Span &obj );
		Span &	operator= ( const Span &obj );
		~Span();

		void	addNumber( int );
		void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );

		int		shortestSpan();
		int		longestSpan();

		class MaxCapacity : public std::exception {
			public:
				char const* what() const throw ();
		};

		class NotEnoughtNumbers : public std::exception {
			public:
				char const* what() const throw ();
		};
};

#endif
