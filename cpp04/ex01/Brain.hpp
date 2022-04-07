/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:11:09 by egomes            #+#    #+#             */
/*   Updated: 2022/04/05 21:22:30 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain( const Brain &obj );
		Brain &	operator= ( const Brain &obj );
		~Brain();
};

#endif
