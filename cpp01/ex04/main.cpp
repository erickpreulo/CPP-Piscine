/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:27:49 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 14:28:55 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

int		main(int ac, char **av) {
	if (ac == 4) {
		Replace replace;
		replace.replaceFile(av[1], av[2], av[3]);
	}
	else
		std::cout << "Need 3 arguments, file, str1 and str2" << std::endl;
	return(0);
}
