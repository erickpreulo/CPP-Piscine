/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:22:54 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 14:35:57 by egomes           ###   ########.fr       */
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

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
