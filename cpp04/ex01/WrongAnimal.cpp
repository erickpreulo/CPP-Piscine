/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:59:45 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:02:35 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj ) {
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &	WrongAnimal::operator= ( const WrongAnimal &obj ) {
	std::cout << "Copy WrongAnimal assigment operator called" << std::endl;
	_type = obj._type;
	return(*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "WroooongAnimaaaallllll" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (_type);
}
