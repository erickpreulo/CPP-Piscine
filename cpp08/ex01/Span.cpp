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

#include "Span.hpp"

Span::Span( unsigned int limit ) : _limit(limit) {
	//std::cout << "Default Span constructor called" << std::endl;
}

Span::Span( const Span &obj ) {
	//std::cout << "Copy Span constructor called" << std::endl;
	*this = obj;
}

Span &	Span::operator= ( const Span &obj ) {
	//std::cout << "Copy Span assigment operator called" << std::endl;
	if (this != &obj) {
		_vector = obj._vector;
		_limit = obj._limit;
	}
	return(*this);
}

Span::~Span() {
	//std::cout << "Destructor Span called" << std::endl;
}

void	Span::addNumber( int nb ) {
	if (_vector.size() == _limit)
		throw Span::MaxCapacity();
	_vector.push_back(nb);
}

void	Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	if (_vector.size() + std::distance(begin, end) > _limit)
		throw Span::MaxCapacity();
	_vector.insert(_vector.end(), begin, end);
}

int		Span::shortestSpan() {
	std::vector<int>::iterator it;
	int		shortest = _limit;

	if (_vector.size() < 2)
		throw Span::NotEnoughtNumbers();

	std::sort(_vector.begin(), _vector.end());

	for ( it = _vector.begin() + 1; it != _vector.end(); it++) {
		if (*it - *(it - 1) < shortest)
			shortest = *it - *(it - 1);
	}
	return (shortest);
}

int		Span::longestSpan() {
	std::vector<int>::iterator first;
	std::vector<int>::iterator last;

	if (_vector.size() < 2)
		throw Span::NotEnoughtNumbers();
	
	first = std::min_element(_vector.begin(), _vector.end());
	last = std::max_element(_vector.begin(), _vector.end());

	return (*last - *first);
}

char const* Span::MaxCapacity::what() const throw () {
	return("Unfortunately this class is full!");
}

char const* Span::NotEnoughtNumbers::what() const throw () {
	return("You need to add more elements to this class to call this method!");
}