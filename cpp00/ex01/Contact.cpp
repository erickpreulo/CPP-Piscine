/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:52:14 by egomes            #+#    #+#             */
/*   Updated: 2022/03/07 18:55:16 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact() {
	//std::cout << "Construtor Contact called!!!" << std::endl;
	return;
}

Contact::~Contact() {
	//std::cout << "Destructor Contact caller!!!" << std::endl;
	return;
}

void    Contact::newContact(int i) {
    std::cout << "First Name : ";
	std::cin >> f_name;
	std::cout << "Last Name : ";
	std::cin >> l_name;
	std::cout << "Nickname : ";
	std::cin >> n_name;
	std::cout << "Phone Number : ";
	std::cin >> phone_num;
	std::cout << "Darkest Secret : ";
	std::cin >> dark_secr;
	index = std::to_string(i);
}

void    Contact::printRef(std::string str) {
    if (str.length() >= 11)
		std::cout << str.substr(0, 9) + "." << "|";
	else {
		for (size_t count = 0; count < (str.length() - 10); count++)
			str.insert(count, " ");
		std::cout << str << "|";
	}
}

void	Contact::print() {
	printRef(index);
	printRef(f_name);
	printRef(l_name);
	printRef(n_name);
	std::cout << std::endl;
}
