/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:37:27 by egomes            #+#    #+#             */
/*   Updated: 2022/04/28 00:01:18 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#define HIGHG 1
#define LOWG 150

Form::Form(const std::string &name, const int &gradeSign, const int &gradeExecute)
: _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _signed(false) {
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
	if (b.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

const char* Form::GradeTooHighException::what() const throw () {
	return ("Grade too high to be signed!");
}

const char* Form::GradeTooLowException::what() const throw () {
	return ("Grade too low to be signed!");
}

const char* Form::GradeTooLowToExecute::what() const throw () {
	return ("Grade too low to execute!");
}

const char* Form::GradeNotSigned::what() const throw () {
	return ("Grade need to be signed!");
}

std::ostream & operator<< (std::ostream & o, Form const & form) {
	std::string sign = form.getSigned() ? "Yes" : "Now";

	o << form.getName() << ", Form grade sign " << form.getGradeSign() << ", Form grade execute " << form.getGradeExecute()
		<< ", target: " << form.getTarget() << ", its signed? " << sign << ".";
	return (o);
}

void	Form::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeExecute())
		throw Form::GradeTooLowToExecute();
	if (!getSigned())
		throw Form::GradeNotSigned();
	executeAction();
}
