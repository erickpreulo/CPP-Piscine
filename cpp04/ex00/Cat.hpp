/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:49:01 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 20:50:05 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	private:

	public:
		Cat();
		Cat( const Cat &obj );
		Cat &	operator= ( const Cat &obj );
		~Cat();
		void	makeSound() const ;
		std::string	getType() const ;
};

#endif
