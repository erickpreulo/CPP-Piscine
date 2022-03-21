/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:00:07 by egomes            #+#    #+#             */
/*   Updated: 2022/03/21 16:00:07 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	//std::cout << "constructor" << std::endl;
}

Fixed::Fixed( std::string name) {
	//std::cout << "constructor" << std::endl;
	this->name = name;
}

Fixed::~Fixed() {
	//std::cout << "destructor" << std::endl;
}
