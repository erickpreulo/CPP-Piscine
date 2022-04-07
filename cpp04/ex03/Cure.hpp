/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:05:09 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 20:22:24 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {
	private:

	public:
		Cure();
		Cure( const Cure &obj );
		Cure &	operator= ( const Cure &obj );
		~Cure();
		AMateria*	clone() const ;
		void	use( ICharacter& type );
};

#endif
