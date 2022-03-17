/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:43:13 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 13:56:14 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av) {
	int HordeSize = 5;
	if (ac == 2) {
		Zombie *Horde = zombieHorde(HordeSize, av[1]);
		for (int i = 0; i < HordeSize; i++)
			Horde[i].announce();
		delete [] Horde;
	}
	return (0);
}
