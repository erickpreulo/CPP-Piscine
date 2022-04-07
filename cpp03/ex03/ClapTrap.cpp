/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:03:38 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 17:01:28 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default ClapTrap \" CR7 \" constructor called" << std::endl;
	_name = "CR7";
	_hitPoints = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "Custom ClapTrap name: " << name << " constructor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &obj ) {
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = obj;
}

ClapTrap &	ClapTrap::operator= ( const ClapTrap &obj ) {
	std::cout << "Copy assigment ClapTrap operator called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoint = obj._energyPoint;
	_attackDamage = obj._attackDamage;
	return(*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor " << _name << " called" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (_energyPoint == 0) {
		std::cout << "ClapTrap " << _name << ", sorry, but you don't have more energy points to continue playing!" << std::endl;
		return ;
	}
	else if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << ", sorry, but you are dead bro!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_energyPoint == 0) {
		std::cout << _name << ", sorry, but you don't have more energy points to continue playing!" << std::endl;
		return ;
	}
	else if (_hitPoints == 0) {
		std::cout << _name << ", sorry, but you are dead bro!" << std::endl;
		return ;
	}
	std::cout << _name << " took " << amount << " of damage!" << std::endl;
	_hitPoints = amount >= _hitPoints ? 0 : _hitPoints - amount;
	if (_hitPoints == 0)
		std::cout << "bye bye, you are dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoint == 0) {
		std::cout << _name << ", sorry, but you don't have more energy points to continue playing!" << std::endl;
		return ;
	}
	else if (_hitPoints == 0) {
		std::cout << _name << ", sorry, but you are dead bro!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << "Congrats, you receive " << amount << " points! Now you have " << _hitPoints << " Hit Points to use, be wise!" << std::endl; 
	_energyPoint--;
}

int ClapTrap::getHitPoints() {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() {
	return this->_energyPoint;
}

int ClapTrap::getAttackDamage() {
	return this->_attackDamage;
}
