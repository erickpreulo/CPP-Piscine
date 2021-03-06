/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:38:38 by egomes            #+#    #+#             */
/*   Updated: 2022/03/21 15:02:29 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	//std::cout << "constructor" << std::endl;
}

Zombie::Zombie(std::string name) {
	//std::cout << "constructor" << std::endl;
	_name = name;
}

Zombie::~Zombie() {
	std::cout << _name << " Adios" << std::endl;
}

void	Zombie::announce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	_name = name;
}
