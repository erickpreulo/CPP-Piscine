/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 06:29:31 by egomes            #+#    #+#             */
/*   Updated: 2022/04/29 23:02:35 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#define SIGN 72
#define EXEC 45

RobotomyRequestForm::RobotomyRequestForm( std::string target )
: Form("RobotomyRequestForm", SIGN, EXEC), _target(target) {
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &obj )
: Form("RobotomyRequestForm", SIGN, EXEC) {
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	*this = obj;
}

RobotomyRequestForm &	RobotomyRequestForm::operator= ( const RobotomyRequestForm &obj ) {
	std::cout << "Copy RobotomyRequestForm assigment operator called" << std::endl;
	_target = obj.getTarget();
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor RobotomyRequestForm called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const {
	return (_target);
}

void	RobotomyRequestForm::executeAction() const {
	std::srand(time(0));
	bool success = std::rand() % 2;
	
	std::cout << "Beedo boop bop beeda beep boop lop bleeda bee bop bleeda booop bopp beedlaboop boooopppppp!!!!!!" << std::endl;
	if (success)
		std::cout << _target << " has been robotomized!!!" << std::endl;
	else
		std::cout << _target << " has failure in robotomization!!!" << std::endl;
}
