/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:10:56 by egomes            #+#    #+#             */
/*   Updated: 2022/05/06 14:16:17 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define SIZELIST 5
#define SIZENAMES 3
int	main() {

	std::cout << "===== INT ARRAY =====" << std::endl;
	Array<int> list(SIZELIST);
	
	list[0] = 70;
	list[1] = 65;
	list[2] = 90;
	list[3] = 15;
	list[4] = 6;

	for (int i = 0; i < SIZELIST; i++)
		std::cout << list[i] << std::endl;
	
	std::cout << "size of the int array: " << list.size() << std::endl;
	
	std::cout << std::endl << "===== INT STRING =====" << std::endl;

	Array<std::string> names(SIZENAMES);
	
	names[0] = "Erick";
	names[1] = "Luisa";
	names[2] = "ZUZU";

	for (int i = 0; i < SIZENAMES; i++)
		std::cout << names[i] << std::endl;
	
	std::cout << "size of the string array: " << names.size() << std::endl;

	try {
		std::cout << std::endl << "====== ERROR ======" << std::endl;
		std::cout << names[5] << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
	
}
