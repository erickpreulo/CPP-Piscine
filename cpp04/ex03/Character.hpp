/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:04 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 11:36:41 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

#define SIZE 4
class Character : public ICharacter{
	private:
		std::string _name;
		AMateria* _inventory[SIZE];
		AMateria* _trash[SIZE];
	public:
		Character( std::string name );
		Character( const Character &obj );
		Character &	operator= ( const Character &obj );
		~Character();
		
		std::string const &	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
