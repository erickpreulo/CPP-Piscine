/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:17:30 by egomes            #+#    #+#             */
/*   Updated: 2022/04/15 14:35:28 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < SIZE; i++)
		_templates[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &obj ) {
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = obj;
}

MateriaSource &	MateriaSource::operator= ( const MateriaSource &obj ) {
	std::cout << "Copy MateriaSource assigment operator called" << std::endl;
	for (int i = 0; i < SIZE; i++)
		_templates[i] = obj._templates[i];
	return(*this);
}

MateriaSource::~MateriaSource() {
	std::cout << "Destructor MateriaSource called" << std::endl;
	for (int i = 0; i < SIZE; i++)
		if (_templates[i])
			delete _templates[i];
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < SIZE; i++)
		if (!_templates[i]) {
			_templates[i] = m;
			break ;
		}
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = (SIZE - 1); i >= 0; i--)
		if (_templates[i] && _templates[i]->getType() == type)
			return (_templates[i]->clone());
	return (0);
}