/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:28:39 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 10:33:47 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
	private:

	public:
		Cure();
		Cure( const Cure &obj );
		Cure &	operator= ( const Cure &obj );
		~Cure();
		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif
