/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:59:45 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:06:55 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &obj );
		WrongAnimal &	operator= ( const WrongAnimal &obj );
		~WrongAnimal();
		void	makeSound() const ;
		std::string	getType() const ;
};

#endif
