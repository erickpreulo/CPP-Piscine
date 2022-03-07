/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:53:31 by egomes            #+#    #+#             */
/*   Updated: 2022/03/07 18:53:46 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	//std::cout << "Construtor PhoneBook called!!!" << std::endl;
	_i = 0;
	_size = 0;
	return;
}

PhoneBook::~PhoneBook() {
	//std::cout << "Destructor PhoneBook caller!!!" << std::endl;
	return;
}

void	PhoneBook::addContact() {
	if (_i == 8)
		_i = 0;
	_contacts[_i].newContact(_i);
	_i++;
	_size++;
}

void	PhoneBook::printContacts() {
	int limit = (_size >= 8) ? 8 : _size;
	for (int j = 0; j < limit; j++) {
		_contacts[j].print();
	}
}
