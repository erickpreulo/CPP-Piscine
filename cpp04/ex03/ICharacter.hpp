/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:04:06 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 20:17:20 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() {};
		virtual std::string const & getName() const = 0;
		virtual void	equip( AMateria* m ) = 0;
		virtual void	unequipe( int idx ) = 0;
		virtual void	use( int idx, ICharacter& target ) = 0;
};

#endif
