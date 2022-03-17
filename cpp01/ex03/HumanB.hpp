/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:12:50 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 18:16:32 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB( std::string name );
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &newWeapon);
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif
