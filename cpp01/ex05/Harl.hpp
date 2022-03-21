/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:41:53 by egomes            #+#    #+#             */
/*   Updated: 2022/03/21 15:26:28 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

	public:
		Harl();
		~Harl();
		void	complain( std::string level );

	private:
		void	debug( void );
		void	info( void );
		void	warnig( void );
		void	error( void );
};

#endif
