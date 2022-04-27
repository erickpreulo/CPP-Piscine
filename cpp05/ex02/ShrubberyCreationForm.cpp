/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 06:29:11 by egomes            #+#    #+#             */
/*   Updated: 2022/04/26 15:10:01 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#define SIGN 145
#define EXEC 137

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: Form("ShrubberyCreationForm", SIGN, EXEC), _target(target) {
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &obj )
: Form("ShrubberyCreationForm", SIGN, EXEC) {
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = obj;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &obj ) {
	std::cout << "Copy ShrubberyCreationForm assigment operator called" << std::endl;
	_target = obj.getTarget();
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor ShrubberyCreationForm called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const {
	return (_target);
}

void	ShrubberyCreationForm::executeAction() const {
	std::ofstream myFile(_target + "_shrubbery");
	
	myFile << "               ,@@@@@@@, " << std::endl
<< "       ,,,    ,@@@@@@/@@,  .oo8888o. " << std::endl
<< "    ,&%&&%&&%,@@@@@/@@@@@@,8888888/8o " << std::endl
<< "   ,%&&%&&%&&%,@@@@@@@/@@@88888888/88 " << std::endl
<< "   %&&%&%&/%&&%@@@@@/ /@@@88888888888 " << std::endl
<< "   %&&%/ %&&%&&@@@ V /@@  `8888 `/88 " << std::endl
<< "   `&%& ` /%&     |.|         | |8 " << std::endl
<< "       |o|        | |         | | " << std::endl
<< "       |.|        | |         | | " << std::endl
<< "    \\/ .|/_/__/ ,|_/__\\/.   |_/__/_ " << std::endl;

	myFile.close();
}
