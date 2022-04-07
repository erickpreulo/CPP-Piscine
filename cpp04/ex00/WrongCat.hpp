/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:59:15 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:01:20 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:

	public:
		WrongCat();
		WrongCat( const WrongCat &obj );
		WrongCat &	operator= ( const WrongCat &obj );
		~WrongCat();
		void	makeSound() const ;
		std::string	getType() const ;
};

#endif
