/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:56:57 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 19:02:06 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &obj );
		DiamondTrap &	operator= ( const DiamondTrap &obj );
		~DiamondTrap();
		void	whoAmI();
};

#endif
