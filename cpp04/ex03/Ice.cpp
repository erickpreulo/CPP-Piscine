/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:05:01 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 20:19:59 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	std::cout << "Default Ice constructor called" << std::endl;
	_type = "ice";
}

Ice::Ice( const Ice &obj ) {
	std::cout << "Copy Ice constructor called" << std::endl;
	*this = obj;
}

Ice &	Ice::operator= ( const Ice &obj ) {
	std::cout << "Copy Ice assigment operator called" << std::endl;
	_type = obj._type;
	return(*this);
}

Ice::~Ice() {
	std::cout << "Destructor Ice called" << std::endl;
}

AMateria*	Ice::clone() const {
	AMateria *m = new Ice();
	return(m);
}

void	Ice::use( ICharacter& type) {
	std::cout << "'* shoots an ice bolt at " << type << " *'" << std::endl;
}
