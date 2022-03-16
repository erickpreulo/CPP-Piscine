/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:41:06 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 14:54:55 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace() {
	//std::cout << "constructor" << std::endl;
}

Replace::Replace( std::string name) {
	//std::cout << "constructor" << std::endl;
	this->name = name;
}

Replace::~Replace() {
	//std::cout << "destructor" << std::endl;
}

void	Replace::replaceFile(char *file, char *str1, char *str2) {
	cmd.openFile(file);
	cmd.replaceStr(str1, str2);
}
