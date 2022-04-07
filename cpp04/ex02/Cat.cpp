/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:49:01 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:03:53 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat( const Cat &obj ) {
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = obj;
}

Cat &	Cat::operator= ( const Cat &obj ) {
	std::cout << "Copy Cat assigment operator called" << std::endl;
	_type = obj._type;
	return(*this);
}

Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meeeaaaauuuuuuuuuu" << std::endl;
}

std::string	Cat::getType() const {
	return(_type);
}
