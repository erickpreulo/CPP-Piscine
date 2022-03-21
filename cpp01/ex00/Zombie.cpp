/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:05:53 by egomes            #+#    #+#             */
/*   Updated: 2022/03/21 14:56:25 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	//std::cout << "constructor" << std::endl;
}

Zombie::Zombie(std::string name)
: _name(name) {
	//std::cout << "constructor" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " Adios" << std::endl;
}

void	Zombie::announce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
