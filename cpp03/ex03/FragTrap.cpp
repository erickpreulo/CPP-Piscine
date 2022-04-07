/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:42:58 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 01:52:36 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default FragTrap \" CR7 \" constructor called" << std::endl;
	_name = "CR7";
	_hitPoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) {
	std::cout << "Custom FragTrap name: " << name << " constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &obj ) {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = obj;
}

FragTrap &	FragTrap::operator= ( const FragTrap &obj ) {
	std::cout << "Copy assigment FragTrap operator called" << std::endl;
	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoint = obj._energyPoint;
	_attackDamage = obj._attackDamage;
	return(*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor " << _name << " called" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	if (_hitPoints == 0) {
		std::cout << "FragTrap " << _name << " is already dead. Isn't a little bit strange?" << std::endl;
		return ;
	}
	std::cout << _name << " is asking for a friendly high five!" << std::endl;
}
