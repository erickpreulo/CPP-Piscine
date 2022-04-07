/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:48:47 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:03:12 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default Animal constructor called" << std::endl;
	_type = "Unnoued";
}

Animal::Animal( const Animal &obj ) {
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = obj;
}

Animal &	Animal::operator= ( const Animal &obj ) {
	std::cout << "Copy Animal assigment operator called" << std::endl;
	_type = obj._type;
	return(*this);
}

Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "aiuasui aiusuasu" << std::endl;
}

std::string	Animal::getType() const {
	return(_type);
}
