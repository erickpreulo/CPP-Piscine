/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:53:31 by egomes            #+#    #+#             */
/*   Updated: 2022/03/03 14:32:59 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_search(std::string str) {
	if (str.length() >= 11)
		std::cout << str.substr(0, 9) + "." << "|";
	else {
		for (size_t count = 0; count < (str.length() - 10); count++)
			str.insert(count, " ");
		std::cout << str << "|";
	}
}

void	add_contact(t_book *book, int i) {
	std::cout << "First Name : ";
	std::cin >> book->f_name[i];
	std::cout << "Last Name : ";
	std::cin >> book->l_name[i];
	std::cout << "Nickname : ";
	std::cin >> book->n_name[i];
	std::cout << "Phone Number : ";
	std::cin >> book->phone_num[i];
	std::cout << "Darkest Secret : ";
	std::cin >> book->dark_secr[i];
	book->index[i] = std::to_string(i);
}

int		main() {
	char 	buff[50];
	int 	i;
	int		limit;
	int		size;
	t_book book;

	std::cin >> buff;
	i = 0;
	size = 0;
	while (strcmp(buff, "EXIT") != 0)
	{
		if (i == 8)
			i = 0;
		if (strcmp(buff, "ADD") == 0) {
			add_contact(&book, i);
			i++;
			size++;
		}
		limit = (size >= 8) ? 8 : size;
		if (strcmp(buff, "SEARCH") == 0)
		{
			for (int j = 0; j < limit; j++) {
				print_search(book.index[j]);
				print_search(book.f_name[j]);
				print_search(book.l_name[j]);
				print_search(book.n_name[j]);
				std::cout << std::endl;
			}
		}
		std::cin >> buff;
	}
	return (0);
}
