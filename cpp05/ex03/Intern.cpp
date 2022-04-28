/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:34:08 by egomes            #+#    #+#             */
/*   Updated: 2022/04/28 12:48:26 by egomes           ###   ########.fr       */
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

Form *Intern::MakePresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::MakeRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::MakeShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm( const std::string name, const std::string target ) {
	Form *(Intern::*arr_functions[])(const std::string &target) = {
		&Intern::MakePresidentialPardonForm,
		&Intern::MakeRobotomyRequestForm,
		&Intern::MakePresidentialPardonForm
	};
	std::string forms[ALLFORMS] = {PREDIDENTIAL, ROBOTOMY, SHRUBBERY};

	int i = -1;
	while (++i != ALLFORMS)
		if (forms[i] == name) {
			std::cout << "Intern creates " << name << std::endl; break; }
	switch (i) {
		case (0):
			return ((this->*arr_functions[0])(target));
		case (1):
			return ((this->*arr_functions[1])(target));
		case (2):
			return ((this->*arr_functions[2])(target));
		default:
			break;
	}
	std::cout << "Error: The Form [" << name << "] doesn't exist!" << std::endl;
	return(NULL);
}
