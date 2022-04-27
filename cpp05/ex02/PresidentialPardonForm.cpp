/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 06:29:49 by egomes            #+#    #+#             */
/*   Updated: 2022/04/26 14:47:54 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#define SIGN 25
#define EXEC 5

PresidentialPardonForm::PresidentialPardonForm( std::string target )
: Form("PresidentialPardonForm", SIGN, EXEC), _target(target) {
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &obj )
: Form("PresidentialPardonForm", SIGN, EXEC) {
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	*this = obj;
}

PresidentialPardonForm &	PresidentialPardonForm::operator= ( const PresidentialPardonForm &obj ) {
	std::cout << "Copy PresidentialPardonForm assigment operator called" << std::endl;
	_target = obj.getTarget();
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor PresidentialPardonForm called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const {
	return (_target);	
}

void	PresidentialPardonForm::executeAction() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
