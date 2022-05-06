/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:06:13 by egomes            #+#    #+#             */
/*   Updated: 2022/05/05 09:51:45 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar( std::string nbr )
: _input(nbr) {
	// std::cout << "Default Scalar constructor called" << std::endl;
	getType();
}

Scalar::Scalar( const Scalar &obj ) {
	std::cout << "Copy Scalar constructor called" << std::endl;
	*this = obj;
}

Scalar &	Scalar::operator= ( const Scalar &obj ) {
	std::cout << "Copy Scalar assigment operator called" << std::endl;
	_input = obj._input;
	_type = obj._type;
	return(*this);
}

Scalar::~Scalar() {
	// std::cout << "Destructor Scalar called" << std::endl;
}

//    TYPE VERIFICATION

bool	Scalar::isChar() const {
	if (_input.length() == 1 && (isprint(_input[0]) && !isdigit(_input[0])))
		return (true);
	return (false);
}

bool	Scalar::isInt() const {
	unsigned int i = 0;
	if (_input.length() > 10)
		return (false);
	if (_input[0] == '-')
		i++;
	while (i < _input.length())
		if (!isdigit(_input[i++]))
			return (false);
	return (true);
}

bool	Scalar::isFloat() const {
	int lastCharacter = (_input.length() - 1);
	int dot = 0;
	if (_input[lastCharacter] == 'f' && isdigit(_input[lastCharacter - 1]))
		for (int i = 0; i < lastCharacter; i++) {
			if (!isdigit(_input[i]) && _input[i] != '.')
				return (false);
			if (_input[i] == '.')				
				dot++;
		}
	if (dot == 1)
		return (true);
	return (false);
}

bool	Scalar::isDouble() const {
	int dot = 0;
	unsigned int i = 0;
	if (_input[i] == '-')
		i++;
	while (i < _input.length()) {
		if (_input[i] == '.')
			dot++;
		if (dot == 2 || (!isdigit(_input[i]) && _input[i] != '.'))
			return (false);
		i++;
	}
	return (true);
}

bool	Scalar::isPseudo() const {
	std::string pseudo[3] = {"-inf", "+inf", "nan"};

	for ( int i = 0; i < 3; i++)
		if (pseudo[i] == _input)
			return (true);
	
	return (false);
}

bool	Scalar::isPseudoF() const {
	std::string pseudo[3] = {"-inff", "+inff", "nanf"};

	for ( int i = 0; i < 3; i++)
		if (pseudo[i] == _input)
			return (true);
	
	return (false);
}

void	Scalar::getType() {
	if (isChar() || isInt() || isFloat() || isDouble())
		sscanf(_input.c_str(), "%lf", &_type);
}


//      CONVERSION

void	Scalar::convertChar() const {

	std::cout << "char: ";

	if (isChar())
		std::cout << "'" << _input << "'";
	else if (isprint(_type))
		std::cout << "'" << static_cast<char>(_type) << "'";
	else if (isInt() || isFloat() || isDouble())
		std::cout << "Non displayable";
	else
		std::cout << "impossible";

	std::cout << std::endl;
}

void	Scalar::convertInt() const {

	std::cout << "int: ";

	if (isInt())
		std::cout << _input;
	else if ((isChar() || isFloat() || isDouble())
			&& (_type >= INT_MIN && _type <= INT_MAX))
		std::cout << static_cast<int>(_type);
	else
		std::cout << "impossible";

	std::cout << std::endl;
}

void	Scalar::convertFlow() const {

	std::cout << "float: ";

	if (isFloat() || isPseudoF())
		std::cout << std::fixed << std::setprecision(1) << _type << "f";
	else if (isChar() || isInt() || isDouble())
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_type) << "f";
	else if (isPseudo())
		std::cout << _input << "f";
	else
		std::cout << "impossible";

	std::cout << std::endl;
}

void	Scalar::convertDouble() const {
	
	std::cout << "double: ";
	
	if (isDouble() || isPseudo())
		std::cout << _type;
	else if (isChar() || isInt() || isFloat())
		std::cout << static_cast<double>(_type);
	else if (isPseudoF())
		std::cout << _input.substr(0, (_input.length() - 1));
	else
		std::cout << "impossible";
	
	std::cout << std::endl;

}

void	Scalar::convert() const {
	convertChar();
	convertInt();
	convertFlow();
	convertDouble();
}

std::ostream & operator<< (std::ostream & o, Scalar const & scalar) {
	scalar.convert();
	return (o);
}
