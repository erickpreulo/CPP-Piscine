#! /bin/sh bash

GREEN='\033[0;32m'
NC='\033[0m'

time="$(date +"%T")"
date="$(date +"%Y""/""%m""/""%d")"
header="/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: ${date} ${time} by egomes            #+#    #+#             */
/*   Updated: ${date} ${time} by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
"
read -p "Class Name:  " name

name_upper="$(tr '[:lower:]' '[:upper:]' <<< ${name})"
name_lower="$(tr '[:upper:]' '[:lower:]' <<< ${name:0:1})${name:1}"

# the hpp file #

echo  "$header" > $name.hpp
echo "#ifndef ${name_upper}_HPP
# define ${name_upper}_HPP
#include <iostream>
class $name {
	private:
	public:
		${name}();
		${name}( const $name &obj );
		$name &	operator= ( const $name &obj );
		~${name}();
};
#endif" >> $name.hpp

# the cpp file #
echo  "$header" > $name.cpp
echo "#include \"$name.hpp\"
$name::$name() {
	std::cout << \"Default $name constructor called\" << std::endl;
}
$name::$name( const $name &obj ) {
	std::cout << \"Copy $name constructor called\" << std::endl;
	*this = obj;
}
$name &	$name::operator= ( const $name &obj ) {
	std::cout << \"Copy $name assigment operator called\" << std::endl;
	return(*this);
}
$name::~$name() {
	std::cout << \"Destructor $name called\" << std::endl;
}" >> $name.cpp

echo -e "========================
${GREEN}class $name created${NC}
========================"