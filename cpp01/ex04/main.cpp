/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:27:49 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 23:12:29 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "StrReplace.hpp"

void	argValidation(char *str1) {
	if (!strcmp(str1, "")) {
		std::cout << "I need some character here!!!" << std::endl;
		exit(1);
	}
}
int		main(int ac, char **av) {
	if (ac == 4) {
		argValidation(av[2]);
		StrReplace replace(av[2], av[3]);
		replace.openFile(av[1]);
		replace.replaceStr();
	}
	else
		std::cout << "Need 3 arguments, file, str1 and str2" << std::endl;
	return(0);
}
