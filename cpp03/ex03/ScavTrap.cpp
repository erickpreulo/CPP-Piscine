/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:55:50 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 01:59:43 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default ScavTrap \" CR7 \" constructor called" << std::endl;
	_name = "CR7";
	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "Custom ScavTrap name: " << name << " constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &obj ) {
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = obj;
}

ScavTrap &	ScavTrap::operator= ( const ScavTrap &obj ) {
	std::cout << "Copy assigment ScavTrap operator called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoint = obj._energyPoint;
	_attackDamage = obj._attackDamage;
	return(*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor " << _name << " called" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (_energyPoint == 0) {
		std::cout << "ScavTrap " << _name << ", sorry, but you don't have more energy points to continue playing!" << std::endl;
		return ;
	}
	else if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << ", sorry, but you are dead bro!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoint--;
}

void	ScavTrap::guardGate() {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " are dead! :(" << std::endl;
		return ;
	}
	std::cout << _name << " is now in Gate Keeper mode." << std::endl;
}
