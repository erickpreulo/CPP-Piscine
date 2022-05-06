/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:42:22 by egomes            #+#    #+#             */
/*   Updated: 2022/05/05 16:09:48 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int	main() {
	std::string strArray[] = {"primeiro", "segundo", "terceiro", "quarto", "quinto"};
	int			intArray[] = {0, 1, 2, 3, 4, 5, 6, 7};
	char		charArray[] = {'a', 'b', 'c', 'd'};

	std::cout << "====== PRINT STRING ARRAY======" << std::endl;
	iter(strArray, 5, print<std::string>);

	std::cout << "====== PRINT INT ARRAY======" << std::endl;
	iter(intArray, 8, print<int>);

	std::cout << "====== PRINT CHAR ARRAY======" << std::endl;
	iter(charArray, 4, print<char>);
}
