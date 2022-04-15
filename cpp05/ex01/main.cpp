/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:05:08 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 21:45:40 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		std::cout << std::endl << "===== Define Instances =====" << std::endl;
		Bureaucrat p("Erick", 15);
		Form f("test", 40, 150);

		std::cout << "===== Status =====" << std::endl;
		std::cout << p << std::endl;
		std::cout << f << std::endl;

		std::cout << "====== Sign ======" << std::endl;
		p.signForm(f);
		f.beSigned(p);
		p.signForm(f);
		
		std::cout << "===== Error =====" << std::endl;
		try {
			p.incrementGrade();
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			p.decrementGrade(150);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "===== Define Instances =====" << std::endl;
		Bureaucrat p("Francis", 152);

		std::cout << "===== Status =====" << std::endl;
		std::cout << p << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}