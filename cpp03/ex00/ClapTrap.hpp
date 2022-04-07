/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:03:38 by egomes            #+#    #+#             */
/*   Updated: 2022/04/04 23:47:36 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &obj );
		ClapTrap &	operator= ( const ClapTrap &obj );
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
