/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 06:29:11 by egomes            #+#    #+#             */
/*   Updated: 2022/04/19 22:52:37 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm( std::string target = "trees" );
		ShrubberyCreationForm( const ShrubberyCreationForm &obj );
		ShrubberyCreationForm &	operator= ( const ShrubberyCreationForm &obj );
		~ShrubberyCreationForm();
	
		std::string	getTarget() const;
		void	executeAction() const;
};

#endif
