/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:50:11 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 19:36:42 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default MateriaSource constructor called" << std::endl;
	_name = "MateriaSource";
	_idx = 0;
	for (int i = 0; i < SIZE; i++)
		_m[i] = 0;
}

MateriaSource::MateriaSource( std::string name ) {
	std::cout << "Default MateriaSource constructor called" << std::endl;
	_name = name;
	_idx = 0;
	for (int i = 0; i < SIZE; i++)
		_m[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource &obj ) {
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = obj;
}

MateriaSource &	MateriaSource::operator= ( const MateriaSource &obj ) {
	std::cout << "Copy MateriaSource assigment operator called" << std::endl;
	for (int i = 0; i <= _idx; i++)
		delete _m[i];
	_name = obj._name;
	_idx = obj._idx;
	for ( int i = 0; i <= _idx; i++)
		_m[i] = obj._m[i];
	return(*this);
}

MateriaSource::~MateriaSource() {
	std::cout << "Destructor MateriaSource called" << std::endl;
	for (int i = 0; i <= _idx; i++)
		delete _m[i];
}

void	MateriaSource::learnMateria( AMateria* m) {
	if (_idx >= SIZE)
		return;
	_m[_idx] = m;
	_idx++;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	if (_m[_idx]->getType() == type)
		return(_m[_idx]->clone());
	return (0);
}
