/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:53:31 by egomes            #+#    #+#             */
/*   Updated: 2022/03/07 18:53:07 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main() {
	PhoneBook pb;
	std::string buff;
	
	while (buff != "EXIT")
	{
		if (buff == "ADD")
			pb.addContact();
		if (buff == "SEARCH")
			pb.printContacts();
		std::cin >> buff;
	}
	return (0);
}
