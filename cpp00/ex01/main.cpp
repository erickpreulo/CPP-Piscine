/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:53:31 by egomes            #+#    #+#             */
/*   Updated: 2022/03/03 21:21:35 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// void	print_search(std::string str) {
// 	if (str.length() >= 11)
// 		std::cout << str.substr(0, 9) + "." << "|";
// 	else {
// 		for (size_t count = 0; count < (str.length() - 10); count++)
// 			str.insert(count, " ");
// 		std::cout << str << "|";
// 	}
// }

int		main() {
	Contact c1, c2;
	
	c1.AddContact();
	// c2.AddContact();
	// std::cout << std::endl;
	// c2.Print();
	std::cout << std::endl;
	c1.setName("Piriquito");
	c1.setName("oi");
	c1.Print();

	// std::cout << c1.getNameComplete() << std::endl;

	// char 	buff[50];
	// int 	i;
	// int		limit;
	// int		size;
	// t_book book;

	// PhoneBook phoneBook;
	// phoneBook.contact[0].name = "Erica";

	// phoneBook.addContact();
	// PhoneBook.search();

	// std::cin >> buff;
	// i = 0;
	// size = 0;
	// while (strcmp(buff, "EXIT") != 0)
	// {
	// 	if (i == 8)
	// 		i = 0;
	// 	if (strcmp(buff, "ADD") == 0) {
	// 		add_contact(&book, i);
	// 		i++;
	// 		size++;
	// 	}
	// 	limit = (size >= 8) ? 8 : size;
	// 	if (strcmp(buff, "SEARCH") == 0)
	// 	{
	// 		for (int j = 0; j < limit; j++) {
	// 			print_search(book.index[j]);
	// 			print_search(book.f_name[j]);
	// 			print_search(book.l_name[j]);
	// 			print_search(book.n_name[j]);
	// 			std::cout << std::endl;
	// 		}
	// 	}
	// 	std::cin >> buff;
	// }
	return (0);
}
