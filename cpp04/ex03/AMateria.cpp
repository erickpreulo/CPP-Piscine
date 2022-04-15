/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:12:46 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 14:33:29 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default AMateria constructor called" << std::endl;
	_type = "unknown";
}

AMateria::AMateria( std::string const & type )
: _type(type) {
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria( const AMateria &obj ) {
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = obj;
}

AMateria &	AMateria::operator= ( const AMateria &obj ) {
	std::cout << "Copy AMateria assigment operator called" << std::endl;
	_type = obj._type;
	return(*this);
}

AMateria::~AMateria() {
	std::cout << "Destructor AMateria called" << std::endl;
}

std::string	const	&	AMateria::getType() const {
	return(_type);
}

void	AMateria::use(ICharacter& target) {
	std::cout << "You are in a wrong place " << target.getName() << std::endl;
}
