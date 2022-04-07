/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:50:11 by egomes            #+#    #+#             */
/*   Updated: 2022/04/06 19:43:42 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define SIZE 4

class MateriaSource : public IMateriaSource {
	private:
		std::string	_name;
		int	_idx;
		AMateria* _m[SIZE];
	public:
		MateriaSource();
		MateriaSource( std::string name );
		MateriaSource( const MateriaSource &obj );
		MateriaSource &	operator= ( const MateriaSource &obj );
		~MateriaSource();
		void	learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
};

#endif
