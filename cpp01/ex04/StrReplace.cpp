/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:29 by egomes            #+#    #+#             */
/*   Updated: 2022/03/18 17:52:36 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StrReplace.hpp"

StrReplace::StrReplace() {
	//std::cout << "constructor" << std::endl;
}

StrReplace::StrReplace(std::string file, std::string s1, std::string s2)
:	_file(file),
	_str1(s1),
	_str2(s2) {
	_handlerError = 0;
	//std::cout << "constructor" << std::endl;
	validation();
}

StrReplace::~StrReplace() {
	//std::cout << "destructor" << std::endl;
	if (!_handlerError) {
		std::cout << "Changes done!" << std::endl;
		std::cout << "You can see your changes in: [" << _file << ".replace]" << std::endl;
	}
	else
		std::cout << "Bye Bye" << std::endl;
}

void	StrReplace::validation() {
	if (_str1 == "") {
		std::cout << "I need some character here!!!" << std::endl;
		_handlerError = 1;
		return ;
	}
	openFile();
}

void	StrReplace::openFile() {
	std::ifstream	t(_file);
	int				size;
	if (!t.is_open()) {
		std::cout << "Error on opening the file: " << _file << std::endl;
		_handlerError = 1;
		return ;
	}
	t.seekg(0, std::ios::end);
	size = t.tellg();
	std::string buffer(size, ' ');
	t.seekg(0);
	t.read(&buffer[0], size);
	_buffer = buffer;
	t.close();
	replaceStr();
}

void	StrReplace::replaceStr() {
	int ptrS;
	int start = 0;

	if (_str1 != _str2) {
		while ((ptrS = _buffer.find(_str1, start)) != -1) {
			_buffer = _buffer.substr(0, ptrS)
				+ _str2
				+ _buffer.substr(ptrS + _str1.length(), _buffer.length() - 1);
			start = ptrS + _str2.length(); 
		}
	}
	saveInFile();
}

void	StrReplace::saveInFile() {
	std::ofstream out(_file + ".replace");
	out << _buffer;
	out.close();
}
