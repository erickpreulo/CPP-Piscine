/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:29 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 23:10:38 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplace.hpp"

StrReplace::StrReplace() {
	//std::cout << "constructor" << std::endl;
}

StrReplace::StrReplace(std::string s1, std::string s2) {
	//std::cout << "constructor" << std::endl;
	_str1 = s1;
	_str2 = s2;
}

StrReplace::~StrReplace() {
	//std::cout << "destructor" << std::endl;
}

void	StrReplace::openFile(std::string file) {
	std::ifstream	t(file);
	int				size;
	if (!t.is_open()) {
		std::cout << "Error on opening the file: " << file << std::endl;
		exit(1);
	}
	t.seekg(0, std::ios::end);
	size = t.tellg();
	std::string buffer(size, ' ');
	t.seekg(0);
	t.read(&buffer[0], size);
	_buffer = buffer;
	t.close();
}

void	StrReplace::replaceStr() {
	int start;

	while ((start = _buffer.find(_str1)) != -1)
		_buffer = _buffer.substr(0, start)
			+ _str2 + _buffer.substr(start
			+ _str1.length(), _buffer.length() - 1);
	std::cout << _buffer << std::endl;
}
