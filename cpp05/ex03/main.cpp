/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:05:08 by egomes            #+#    #+#             */
/*   Updated: 2022/04/27 23:50:34 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {
	std::string name = "Erick";
	try {
		std::cout << std::endl << "===== Define Instances =====" << std::endl;
		Intern Alexandre;
		Form *PresForm;
		Form *RobotForm;
		Form *ShruForm;
		Form *Whatever;

		std::cout << std::endl << "===== Intern Works =====" << std::endl;
		PresForm = Alexandre.makeForm("presidential pardon", "Lulu");
		std::cout << std::endl;
		RobotForm = Alexandre.makeForm("robotomy request", "Zuzu");
		std::cout << std::endl;
		ShruForm = Alexandre.makeForm("shrubbery creation", "Bananas");
		std::cout << std::endl;
		Whatever = Alexandre.makeForm("whatever bro", "Bro");
	
		std::cout << std::endl << "===== Status =====" << std::endl;
		std::cout << *PresForm << std::endl;
		std::cout << *RobotForm << std::endl;
		std::cout << *ShruForm << std::endl;
		
		std::cout << std::endl << "===== End =====" << std::endl;
		delete PresForm;
		delete RobotForm;
		delete ShruForm;
		delete Whatever;
	}
	catch (std::exception & e) {
		std::cout << name << " can't be iniciate. " << e.what() << std::endl;
	}
	catch (char const *e) {
		std::cout << e << std::endl;
	}

	return (0);
}