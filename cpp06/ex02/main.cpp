/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:41:55 by egomes            #+#    #+#             */
/*   Updated: 2022/05/05 11:19:57 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

bool srand_triggered = false;

Base * generate(void) {
	if (!srand_triggered)
		std::srand(time(0));
	srand_triggered = true;
	int rand = std::rand() % 3;

	switch (rand)
	{
	case 0:
		return ( new A );
	case 1:
		return ( new B );
	default :
		return ( new C );
	}
	return (NULL);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "?";
	std::cout << std::endl;
}

void identify(Base& p) {
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}  catch (std::exception& e) {};
	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception& e) {};
	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}  catch (std::exception& e) {};
	
	std::cout << "?" << std::endl;
}

int	main() {
	
	std::cout << "====== RANDON ======" << std::endl;
	for (int i = 0; i < 5; i++) {
		Base *ptr = generate();

		std::cout << "identify_ptr: ";
		identify(ptr);

		std::cout << "identify_ref: ";
		identify(*ptr);

		std::cout << std::endl;

		delete ptr;
	}
	
	std::cout << "\n===== ERROR TEST =====" << std::endl;
	
	std::cout << "identify_ptr: ";
	identify(0);

	std::cout << "identify_ref: ";
	identify(0);

	return (0);
}
