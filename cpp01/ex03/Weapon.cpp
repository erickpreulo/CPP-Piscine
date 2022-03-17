/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:12:25 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 18:09:47 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	//std::cout << "constructor" << std::endl;
}

Weapon::Weapon( std::string name) {
	//std::cout << "constructor" << std::endl;
	_type = name;
}

Weapon::~Weapon() {
	//std::cout << "destructor" << std::endl;
}

std::string	const & Weapon::getType() const {
	return(_type);
}

void	Weapon::setType( std::string newType) {
	_type = newType;
}
