/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:52:14 by egomes            #+#    #+#             */
/*   Updated: 2022/03/03 21:22:49 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

void    Contact::AddContact() {
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
	// book->index[i] = std::to_string(i);
}

void    Contact::Print() {
    std::cout << f_name << std::endl;
    std::cout << l_name << std::endl;
    std::cout << n_name << std::endl;
    std::cout << phone_num << std::endl;
}

void    Contact::setName(std::string newName) {
    if (newName.length() > 3)
        this->f_name = newName;
}