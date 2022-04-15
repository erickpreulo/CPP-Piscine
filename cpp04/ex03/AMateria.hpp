/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:12:46 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 11:43:48 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria &obj );
		AMateria &	operator= ( const AMateria &obj );
		virtual ~AMateria();
		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		
};

#endif
