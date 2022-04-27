/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 06:29:31 by egomes            #+#    #+#             */
/*   Updated: 2022/04/19 22:41:04 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form {
	private:
		std::string _target;
	public:
		RobotomyRequestForm( std::string target = "Some robot");
		RobotomyRequestForm( const RobotomyRequestForm &obj );
		RobotomyRequestForm &	operator= ( const RobotomyRequestForm &obj );
		~RobotomyRequestForm();

		std::string	getTarget() const;
		void	executeAction() const;
};

#endif
