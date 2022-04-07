/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:59:15 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:02:52 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "Default WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &obj ) {
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = obj;
}

WrongCat &	WrongCat::operator= ( const WrongCat &obj ) {
	std::cout << "Copy WrongCat assigment operator called" << std::endl;
	_type = obj._type;
	return(*this);
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "WrooonnngMeeauuuuuu" << std::endl;
}

std::string	WrongCat::getType() const {
	return (_type);
}
