/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:23:34 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 21:37:40 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
:_name(name), _grade(grade) {
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	if (_grade > LOWG)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < HIGHG)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

int	Bureaucrat::getGrade() const {
	return (_grade);
}

std::string	Bureaucrat::getName() const {
	return (_name);
}

void	Bureaucrat::incrementGrade( int grade ) {
	if (_grade - grade < HIGHG)
		throw Bureaucrat::GradeTooHighException();
	_grade -= grade;
}

void	Bureaucrat::decrementGrade( int grade ) {
	if (_grade + grade > LOWG)
		throw Bureaucrat::GradeTooLowException();
	_grade += grade;
}

void	Bureaucrat::signForm(Form & f) {
	if (f.getSigned())
		std::cout << _name << " signed " <<  f.getName() << "!" << std::endl;
	else
		std::cout << _name << " couldn't sign " << f.getName() << " because he's lazy!" << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw () {
	return("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw () {
	return("Grade too low");
}

std::ostream & operator<< (std::ostream & o, Bureaucrat const & bureaucrat) {
	o <<  bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (o);
}
