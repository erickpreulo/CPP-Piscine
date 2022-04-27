/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:05:08 by egomes            #+#    #+#             */
/*   Updated: 2022/04/27 16:55:51 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	std::string name = "Erick";
	try {
		std::cout << std::endl << "===== Define Instances =====" << std::endl;
		Bureaucrat p(name, 2);
		ShrubberyCreationForm shrubbery("home");
		RobotomyRequestForm	robot("wall-e");
		PresidentialPardonForm pardon("Elon Musk");
		
		std::cout << std::endl << "===== Status =====" << std::endl;
		std::cout << p << std::endl;
		std::cout << shrubbery << std::endl;
		std::cout << robot << std::endl;
		std::cout << pardon << std::endl;
	
		std::cout << std::endl << "====== Shrubbery ======" << std::endl;
		try {
			p.signForm(shrubbery);
			p.executeForm(shrubbery);
		}
		catch (std::exception & e) {
			std::cout << "shrubbery error: " << e.what() << std::endl;
		}
		
		std::cout << std::endl << "====== Robot ======" << std::endl;
		try {
			p.signForm(robot);
			p.executeForm(robot);
		}
		catch (std::exception & e) {
			std::cout << "robot error: " << e.what() << std::endl;
		}
		
		std::cout << std::endl << "====== Pardon ======" << std::endl;
		try {
			p.signForm(pardon);
			p.executeForm(pardon);
		}
		catch (std::exception & e) {
			std::cout << "pardon error: " << e.what() << std::endl;
		}
		std::cout << std::endl << "===== Status =====" << std::endl;
		std::cout << p << std::endl;
		std::cout << shrubbery << std::endl;
		std::cout << robot << std::endl;
		std::cout << pardon << std::endl;
		std::cout << std::endl << "====== End ======" << std::endl;
	}
	catch (std::exception & e) {
		std::cout << name << " can't be iniciate. " << e.what() << std::endl;	}

	return (0);
}