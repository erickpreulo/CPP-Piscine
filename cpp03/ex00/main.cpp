/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:08:37 by egomes            #+#    #+#             */
/*   Updated: 2022/04/04 23:52:45 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main() {
	std::cout << " == CONSTRUCTORS == " << std::endl;
	ClapTrap a("Arnold");
	ClapTrap b;
	ClapTrap *c = new ClapTrap("AleShow");

	std::cout << std::endl << " == A ACTIONS == " << std::endl;
	a.attack("Captain America");
	a.beRepaired(4);
	a.takeDamage(3);
	a.takeDamage(30);
	a.attack("Hulk");
	a.beRepaired(10);
	a.takeDamage(50);

	std::cout << std::endl << " == B ACTIONS == " << std::endl;
	b.attack("Iron Man");
	b.takeDamage(9);
	b.beRepaired(2);
	b.takeDamage(3);
	b.attack("Thor");

	std::cout << std::endl << " == C ACTIONS (NO ENERGY) == " << std::endl;
	for (int i = 0; i < 11; i++)
		c->attack("Some target...");
	

	std::cout << std::endl << " == DESTRUCTORS == " << std::endl;
	delete c;
	return(0);
    
}