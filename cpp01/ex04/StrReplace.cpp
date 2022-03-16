/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:29 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 14:23:30 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplace.hpp"

StrReplace::StrReplace() {
	//std::cout << "constructor" << std::endl;
}

StrReplace::StrReplace( std::string name) {
	//std::cout << "constructor" << std::endl;
	_name = name;
}

StrReplace::~StrReplace() {
	//std::cout << "destructor" << std::endl;
}

void	StrReplace::openFile(char *file) {
	std::ifstream t(file);
	if (!t.is_open()) {
		std::cout << "Error on opening the file: " << file << std::endl;
		exit(1);
	}
	t.seekg(0, std::ios::end);
	_size = t.tellg();
	std::string buffer(_size, ' ');
	t.seekg(0);
	t.read(&buffer[0], _size);
	_buffer = buffer;
	std::cout << _buffer << std::endl;
	t.close();
}

void	StrReplace::replaceStr(char *str1, char *str2) {
	_str1 = str1;
	_str2 = str2;

	std::cout << "str1 : " << _str1 << std::endl << "str2 : " << _str2 << std::endl;
}
