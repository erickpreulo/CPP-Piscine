/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:50:04 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 19:47:07 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define SIZE 4

class Character : public ICharacter {
	private:
		std::string _name;
		int	_idx;
		AMateria *_m[SIZE];
	public:
		Character();
		Character( std::string name );
		Character( const Character &obj );
		Character &	operator= ( const Character &obj );
		~Character();
		std::string const & getName() const;
		void	equip( AMateria* m );
		void	unequipe( int idx );
		void	use( int idx, ICharacter& target );
};

#endif
