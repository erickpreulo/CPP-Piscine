/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:22:07 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 21:45:43 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main() {
	try {
		std::cout << std::endl << "==== Define Instance ====" << std::endl;
		Bureaucrat p("Erick", 8);

		std::cout << "==== Status =====" << std::endl;
		std::cout << p << std::endl;

		std::cout << "==== Error =====" << std::endl;
		
		try {
			p.incrementGrade(20);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
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

		std::cout << "==== Error =====" << std::endl;

		try {
			p.decrementGrade(148);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
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
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "==== Define Instance ====" << std::endl;
		Bureaucrat p1("Luisa", 0);
		
		std::cout << "==== Status =====" << std::endl;
		std::cout << p1 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
