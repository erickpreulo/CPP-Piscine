/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:04 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 14:33:39 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name )
: _name(name) {
	std::cout << "Default Character constructor called" << std::endl;
	for (int i = 0; i < SIZE; i++) {
		_inventory[i] = NULL;
		_trash[i] = NULL;
	}
}

Character::Character( const Character &obj ) {
	std::cout << "Copy Character constructor called" << std::endl;
	*this = obj;
}

Character &	Character::operator= ( const Character &obj ) {
	std::cout << "Copy Character assigment operator called" << std::endl;
	_name = obj._name;
	for (int i = 0; i < SIZE; i++) {
		_inventory[i] = obj._inventory[i];
		_trash[i] = obj._trash[i];
	}
	return(*this);
}

Character::~Character() {
	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < SIZE; i++)
		if (_trash[i])
			delete _trash[i];
	for (int i = 0; i < SIZE; i++)
		if (_inventory[i])
			delete _inventory[i];
}

std::string const & Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < SIZE; i++)
		if (!_inventory[i]) {
			_inventory[i] = m;
			break ;
		}
}

void	Character::unequip(int idx) {
	if (idx > SIZE || idx < 0) {
		std::cout << "Wee dont find this inventory!" << std::endl;
		return ;
	}
	if (_inventory[idx] != NULL) {
		for(int i = 0; i < SIZE; i++)
			if (_trash[i]) {
				_trash[i] = _inventory[idx];
				break ;
			}
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx > SIZE || idx < 0 || _inventory[idx] == NULL) {
		std::cout << "Wee dont find this inventory!" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}
