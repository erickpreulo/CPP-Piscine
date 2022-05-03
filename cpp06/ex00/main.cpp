/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:38:55 by egomes            #+#    #+#             */
/*   Updated: 2022/05/03 20:10:31 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Scalar.hpp"

int		main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "The program need receive 1 argument!" << std::endl;
		return (1);
	}
	Scalar caster(av[1]);

	std::cout << caster;

	// std::cout << std::endl;

	// caster.convert();

	// std::cout << std::endl;

	// caster.convertChar();
	// caster.convertInt();
	// caster.convertFlow();
	// caster.convertDouble();

	return (0);
}
