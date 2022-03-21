/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:00:12 by egomes            #+#    #+#             */
/*   Updated: 2022/03/21 15:15:57 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "str    Memory address: " << &str << std::endl;
	std::cout << "strPTR Memory address: " << strPTR << std::endl;
	std::cout << "strREF Memory address: " << &strREF << std::endl;

	std::cout << "str    Value: " << str << std::endl;
	std::cout << "strPTR Value: " << *strPTR << std::endl;
	std::cout << "strREF Value: " << strREF << std::endl;

	return (0);
}
