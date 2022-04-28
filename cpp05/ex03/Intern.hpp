/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:34:08 by egomes            #+#    #+#             */
/*   Updated: 2022/04/28 12:47:36 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <map>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern {
	private:
		Form* MakePresidentialPardonForm(const std::string &target);
		Form* MakeRobotomyRequestForm(const std::string &target);
		Form* MakeShrubberyCreationForm(const std::string &target);
	public:
		Intern();
		Intern( const Intern &obj );
		Intern &	operator= ( const Intern &obj );
		~Intern();
		Form	*makeForm( const std::string, const std::string );
};

#endif
