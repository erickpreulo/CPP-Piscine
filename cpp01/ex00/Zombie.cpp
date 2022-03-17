/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:05:53 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 13:57:23 by egomes           ###   ########.fr       */
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
	std::cout << name << " Adios" << std::endl;
}

void	Zombie::announce() {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
