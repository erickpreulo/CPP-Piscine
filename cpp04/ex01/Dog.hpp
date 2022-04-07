/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:48:55 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:25:15 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *_brain;
	public:
		Dog();
		Dog( const Dog &obj );
		Dog &	operator= ( const Dog &obj );
		~Dog();
		void	makeSound() const ;
		std::string	getType() const ;
};

#endif
