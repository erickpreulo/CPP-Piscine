/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:00:16 by egomes            #+#    #+#             */
/*   Updated: 2022/03/19 17:12:05 by egomes           ###   ########.fr       */
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
	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif
