/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:13:36 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 18:14:14 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
	{
		Weapon club = Weapon("Mp5");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Sniper");
		bob.attack();
	}
	{
		Weapon club = Weapon("9mm");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("Rocket");
		jim.attack();
	}
	return 0;
}
