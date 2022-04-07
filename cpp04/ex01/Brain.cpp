/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:11:09 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:22:43 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Brain!";
}

Brain::Brain( const Brain &obj ) {
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = obj;
}

Brain &	Brain::operator= ( const Brain &obj ) {
	std::cout << "Copy Brain assigment operator called" << std::endl;
	if (this != &obj)
		for (int i = 0; i < 100; i++)
			_ideas[i] = obj._ideas[i];
	return(*this);
}

Brain::~Brain() {
	std::cout << "Destructor Brain called" << std::endl;
}
