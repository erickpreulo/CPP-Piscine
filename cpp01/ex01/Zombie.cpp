/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:38:38 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 13:51:22 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	//std::cout << "constructor" << std::endl;
}

Zombie::Zombie(std::string name) {
	//std::cout << "constructor" << std::endl;
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << name << " Adios" << std::endl;
}

void	Zombie::announce() {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->name = name;
}
