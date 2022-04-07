/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:33:17 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 16:48:46 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define SIZE 8 

int		main() 
{
	{
	Animal	*animal[SIZE];

	std::cout << "========== Constructors ==========" << std::endl;

	for (int i = 0; i < (SIZE / 2); i++)
		animal[i] = new Dog();
	for (int i = (SIZE / 2); i < SIZE; i++)
		animal[i] = new Cat();
	
	std::cout << "========== Destructors ==========" << std::endl;

	for (int i = 0; i < SIZE; i++)
		delete animal[i];
	}

	std::cout << "========== TEST ==========" << std::endl;

	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	return (0);
}
