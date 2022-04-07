/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:42:58 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 01:52:02 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap &obj );
		FragTrap &	operator= ( const FragTrap &obj );
		~FragTrap();
		void	highFivesGuys(void);
};

#endif
