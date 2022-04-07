/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:05:09 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 20:19:49 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	std::cout << "Default Cure constructor called" << std::endl;
	_type = "cure";
}

Cure::Cure( const Cure &obj ) {
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = obj;
}

Cure &	Cure::operator= ( const Cure &obj ) {
	std::cout << "Copy Cure assigment operator called" << std::endl;
	_type = obj._type;
	return(*this);
}

Cure::~Cure() {
	std::cout << "Destructor Cure called" << std::endl;
}

AMateria*	Cure::clone() const {
	AMateria m* = new Cure();
	return(m);
}

void	Cure::use( ICharacter& type ) {
	std::cout << "'* heals " << type << " wounds *'" << std::endl;
}
