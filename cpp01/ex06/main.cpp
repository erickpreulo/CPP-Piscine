/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:59:38 by egomes            #+#    #+#             */
/*   Updated: 2022/03/19 17:12:09 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main( int ac, char **av) {
	if (ac != 2) {
		std::cout << "Need some argument: [DEBUG] || [INFO] || [WARNING] || [ERROR] || [...]" << std::endl;
		return (0);
	}
	Harl p;
	p.complain(av[1]);
	return (0);
}
