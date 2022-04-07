/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:49:01 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:23:38 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_brain;
	public:
		Cat();
		Cat( const Cat &obj );
		Cat &	operator= ( const Cat &obj );
		~Cat();
		void	makeSound() const ;
		std::string	getType() const ;
};

#endif
