/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:05:08 by egomes            #+#    #+#             */
/*   Updated: 2022/04/26 17:14:10 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	std::string name = "Erick";
	std::string form = "test";
	try {
		std::cout << std::endl << "===== Define Instances =====" << std::endl;
		Bureaucrat p(name , 15);
		try {
			Form f(form, 60, 140);

			std::cout << std::endl << "===== Status =====" << std::endl;
			std::cout << p << std::endl;
			std::cout << f << std::endl;

			std::cout << std::endl << "====== Sign ======" << std::endl;
			try {
				p.signForm(f);
			}
			catch (std::exception & e) {
				std::cout << "Can't sign. " << e.what() << std::endl;
			}
			
			std::cout << std::endl << "===== Increment =====" << std::endl;
			try {
				p.incrementGrade();
			}
			catch (std::exception & e) {
				std::cout << "Can't increment. " << e.what() << std::endl;
			}

			std::cout << std::endl << "===== Status =====" << std::endl;
			std::cout << p << std::endl;
			std::cout << f << std::endl;
			
			std::cout << std::endl << "===== Decrement =====" << std::endl;
			try {
				p.decrementGrade(150);
			}
			catch (std::exception & e) {
				std::cout << "Can't decrement. " << e.what() << std::endl;
			}
		}
		catch (std::exception & e) {
			std::cout << form << " can't be iniciate. " << e.what() << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cout << name << " can't be iniciate. " << e.what() << std::endl;	}

	name = "Francis";
	try {
		std::cout << std::endl << "===== Define Instances =====" << std::endl;
		Bureaucrat p(name, 152);

		std::cout << "===== Status =====" << std::endl;
		std::cout << p << std::endl;
	}
	catch (std::exception & e) {
		std::cout << name << " can't be iniciate. " << e.what() << std::endl;
	}
	return (0);
}