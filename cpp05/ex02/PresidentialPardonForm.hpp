/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 06:29:49 by egomes            #+#    #+#             */
/*   Updated: 2022/04/19 22:40:57 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form {
	private:
		std::string	_target;
	public:
		PresidentialPardonForm( std::string target = "Jair Bolsonaro" );
		PresidentialPardonForm( const PresidentialPardonForm &obj );
		PresidentialPardonForm &	operator= ( const PresidentialPardonForm &obj );
		~PresidentialPardonForm();
		
		std::string	getTarget() const;
		void	executeAction() const;
};

#endif
