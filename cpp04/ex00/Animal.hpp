/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:48:47 by egomes            #+#    #+#             */
/*   Updated: 2022/04/09 19:29:41 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal( const Animal &obj );
		Animal &	operator= ( const Animal &obj );
		virtual ~Animal();
		virtual void	makeSound() const ;
		std::string	getType() const ;
};

#endif
