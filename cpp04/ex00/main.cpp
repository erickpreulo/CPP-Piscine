/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:33:17 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 10:33:22 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main() 
{
	{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	}
	std::cout << "======== Wrong =======" << std::endl;
	{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	}
	return (0);
}
