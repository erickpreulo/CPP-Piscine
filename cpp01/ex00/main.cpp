/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:53:46 by egomes            #+#    #+#             */
/*   Updated: 2022/03/21 14:58:47 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie z0 = Zombie();
	Zombie z1 = Zombie("Erick");
	Zombie *z2 = newZombie("lulu");
	Zombie *z3 = new Zombie("Erica");

	std::cout << std::endl;

	z0.announce();
	z1.announce();
	(*z2).announce();
	z3->announce();

	std::cout << std::endl;

	randomChump("Zombiee");
	std::cout << std::endl;

	delete z2;
	delete z3;

	return (0);
}