/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:38:38 by egomes            #+#    #+#             */
/*   Updated: 2022/03/21 15:02:14 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();
		void	setName( std::string name );
	private:
		std::string _name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
