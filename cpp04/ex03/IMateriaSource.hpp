/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:17:10 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 19:42:51 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {};
		virtual	void	learnMateria(AMateria*) = 0;
		virtual			AMateria* createMateria( std::string const & type ) = 0;
};

#endif
