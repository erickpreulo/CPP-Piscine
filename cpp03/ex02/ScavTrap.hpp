/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:55:50 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 01:27:43 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &obj );
		ScavTrap &	operator= ( const ScavTrap &obj );
		virtual ~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();
};

#endif
