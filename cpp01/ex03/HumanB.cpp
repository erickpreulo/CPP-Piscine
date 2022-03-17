/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:12:50 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 18:18:11 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
	//std::cout << "constructor" << std::endl;
}

HumanB::HumanB( std::string name ) : _name(name) {
	//std::cout << "constructor" << std::endl;
	_weapon = NULL;
}

HumanB::~HumanB() {
	//std::cout << "destructor" << std::endl;
}

void	HumanB::attack() {
	if (_weapon)
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " attacks with their hands :(" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	_weapon = &newWeapon;
}
