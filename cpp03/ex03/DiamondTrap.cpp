/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:56:57 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 18:47:13 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "Default DiamondTrap \" Erick \" constructor called" << std::endl;
	_name = "Erick";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string name ) {
	std::cout << "Custom DiamondTrap name: " << name << " constructor called" << std::endl;
	_name = name;
	ClapTrap::_name = _name + "_clap_name";

	ScavTrap	tempS(name);
	FragTrap	tempF(name);

	_hitPoints = tempF.getHitPoints();
	_energyPoint = tempS.getEnergyPoints();
	_attackDamage =  tempF.getAttackDamage();
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj ) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = obj;
}

DiamondTrap &	DiamondTrap::operator= ( const DiamondTrap &obj ) {
	std::cout << "Copy DiamondTrap ScavTrap operator called" << std::endl;
	_name = obj._name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = obj._hitPoints;
	_energyPoint = obj._energyPoint;
	_attackDamage = obj._attackDamage;
	return(*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor " << _name << " called" << std::endl;
}

void	DiamondTrap::whoAmI() {
	if (_hitPoints == 0) {
		std::cout << "DiamondTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "My name is   : " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
