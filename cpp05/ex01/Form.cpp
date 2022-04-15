/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:37:27 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 21:21:48 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, const int &gradeSign, const int &gradeExecute)
: _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	std::cout << "Default Form constructor called" << std::endl;
	if (_gradeSign > LOWG || _gradeExecute > LOWG)
		throw Form::GradeTooLowException();
	if (_gradeSign < HIGHG || _gradeExecute < HIGHG)
		throw Form::GradeTooHighException();
}

Form::Form( const Form &obj )
:_name(obj.getName()), _gradeSign(obj.getGradeSign()), _gradeExecute(obj.getGradeExecute()), _signed(obj.getSigned()) {
	std::cout << "Copy Form constructor called" << std::endl;
	*this = obj;
}

Form &	Form::operator= ( const Form &obj ) {
	std::cout << "Copy Form assigment operator called" << std::endl;
	_signed = obj.getSigned();
	return(*this);
}

Form::~Form() {
	std::cout << "Destructor Form called" << std::endl;
}

const std::string Form::getName() const {
	return (_name);
}

int Form::getGradeSign() const {
	return (_gradeSign);
}

int Form::getGradeExecute() const {
	return (_gradeExecute);
}

bool Form::getSigned() const {
	return (_signed);
}

void	Form::beSigned(Bureaucrat & b) {
	if (b.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw () {
	return ("Grade too high to be signed!");
}

const char* Form::GradeTooLowException::what() const throw () {
	return ("Grade too low to be signed!");
}

std::ostream & operator<< (std::ostream & o, Form const & form) {
	std::string sign = form.getSigned() ? "Yes" : "Now";

	o << form.getName() << ", Form grade sign " << form.getGradeSign() << ", Form grade execute " << form.getGradeExecute()
		<< ", its signed? " << sign << ".";
	return (o);
}
