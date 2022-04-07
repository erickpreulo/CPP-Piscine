/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:05:01 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 20:22:18 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice();
		Ice( const Ice &obj );
		Ice &	operator= ( const Ice &obj );
		~Ice();
		AMateria*	clone() const ;
		void	use( ICharacter& type );
};

#endif
