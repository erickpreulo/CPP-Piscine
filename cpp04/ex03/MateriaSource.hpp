/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:17:30 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 12:17:00 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#define SIZE 4

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _templates[SIZE];
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &obj );
		MateriaSource &	operator= ( const MateriaSource &obj );
		~MateriaSource();
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
