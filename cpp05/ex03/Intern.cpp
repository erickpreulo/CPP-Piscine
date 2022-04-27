/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:34:08 by egomes            #+#    #+#             */
/*   Updated: 2022/04/28 00:04:42 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#define SHRUBBERY "shrubbery creation"
#define ROBOTOMY "robotomy request"
#define PREDIDENTIAL "presidential pardon"
#define ALLFORMS 3

Intern::Intern() {
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern( const Intern &obj ) {
	std::cout << "Copy Intern constructor called" << std::endl;
	*this = obj;
}

Intern &	Intern::operator= ( const Intern &obj ) {
	std::cout << "Copy Intern assigment operator called" << std::endl;
	(void)obj;
	return(*this);
}

Intern::~Intern() {
	std::cout << "Destructor Intern called" << std::endl;
}

Form	*Intern::makeForm( std::string name, std::string target ) {
	std::string forms[ALLFORMS] = {SHRUBBERY, ROBOTOMY, PREDIDENTIAL};
	int i = -1;
	while (++i != ALLFORMS)
		if (forms[i] == name)
			break;
	switch (i)
	{
		case (0):
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		case (1):
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case (2):
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			break;
	}
	std::cout << "Error: The Form [" << name << "] doesn't exist!" << std::endl;
	return(NULL);
}
