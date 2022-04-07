/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:48:55 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:36:21 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog( const Dog &obj ) {
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = obj;
}

Dog &	Dog::operator= ( const Dog &obj ) {
	std::cout << "Copy Dog assigment operator called" << std::endl;
	_type = obj._type;
	*_brain = *(obj._brain);
	return(*this);
}

Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const {
	std::cout << "AUU AUU" << std::endl;
}

std::string	Dog::getType() const {
	return (_type);
}
