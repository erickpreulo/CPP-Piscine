/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:50:04 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 19:32:50 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Default Character constructor called" << std::endl;
	_name = "character";
	_idx = 0;
	for (int i = 0; i < SIZE; i++)
		_m[i] = 0;
}

Character::Character( std::string name ) {
	std::cout << "Default Character constructor called" << std::endl;
	_name = name;
	_idx = 0;
	for (int i = 0; i < SIZE; i++)
		_m[i] = 0;
}

Character::Character( const Character &obj ) {
	std::cout << "Copy Character constructor called" << std::endl;
	*this = obj;
}

Character &	Character::operator= ( const Character &obj ) {
	std::cout << "Copy Character assigment operator called" << std::endl;
	for (int i = 0; i <= _idx; i++)
		delete _m[i];
	_name = obj._name;
	_idx = obj._idx;
	if (this != &obj)
		for (int i = 0; i <= _idx; i++)
			_m[i] = obj._m[i];
	return(*this);
}

Character::~Character() {
	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i <= _idx; i++)
		delete _m[i];
}

std::string const & Character::getName() const {
	return (_name);
}

void	Character::equip( AMateria* m ) {
	if (_idx >= SIZE)
		return ;
	_m[_idx] = m;
	_idx++;
}

void	Character::unequipe( int idx ) {
	if (idx <= 0 || idx > _idx)
		return ;
	_m[idx] = 0;
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx <= 0 || idx > _idx)
		return ;
	_m[idx]->use(target);
}
