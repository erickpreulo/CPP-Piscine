/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:22:07 by egomes            #+#    #+#             */
/*   Updated: 2022/04/16 06:17:40 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main() {
	std::string name = "Erick";
	try {
		std::cout << std::endl << "==== Define Instance ====" << std::endl;
		Bureaucrat p(name, 8);

		std::cout << "==== Status =====" << std::endl;
		std::cout << p << std::endl;

		std::cout << "==== Increment =====" << std::endl;
		
		try {
			p.incrementGrade(20);
		}
		catch (std::exception & e) {
			std::cout << "Can't increment. " << e.what() << std::endl;
		}

		std::cout << "==== Status =====" << std::endl;
		std::cout << p << std::endl;

		std::cout << "==== Correct =====" << std::endl;

		try {
			p.incrementGrade(2);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << "==== Status =====" << std::endl;
		std::cout << p << std::endl;

		std::cout << "==== Decrement =====" << std::endl;

		try {
			p.decrementGrade(148);
		}
		catch (std::exception & e) {
			std::cout << "Can't decrement. " << e.what() << std::endl;
		}
		
		std::cout << "==== Status =====" << std::endl;
		std::cout << p << std::endl;

		std::cout << "==== Correct =====" << std::endl;

		try {
			p.decrementGrade(100);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << "==== Status =====" << std::endl;
		std::cout << p << std::endl;
	}
	catch (std::exception & e) {
		std::cout << name << " can't iniciate. " << e.what() << std::endl;
	}

	name = "Luisa";
	try {
		std::cout << std::endl << "==== Define Instance ====" << std::endl;
		Bureaucrat p1(name, 0);
		
		std::cout << "==== Status =====" << std::endl;
		std::cout << p1 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << name << " can't iniciate. " << e.what() << std::endl;
	}
}
