/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:12:34 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 18:11:11 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	//std::cout << "constructor" << std::endl;
}

HumanA::~HumanA() {
	//std::cout << "destructor" << std::endl;
}

void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() <<  std::endl;
}
