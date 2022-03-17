/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:12:25 by egomes            #+#    #+#             */
/*   Updated: 2022/03/15 18:09:44 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	
	public:
		Weapon();
		Weapon( std::string name );
		~Weapon();
		std::string	const & getType() const;
		void	setType( std::string newType);

	private:
		std::string _type;
};

#endif
