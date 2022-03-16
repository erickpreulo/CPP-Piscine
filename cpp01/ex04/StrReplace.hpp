/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:29 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 20:56:59 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRREPLACE_HPP
# define STRREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

class StrReplace {

	public:
		StrReplace();
		StrReplace( std::string name );
		~StrReplace();
		void	openFile(std::string file);
		void	replaceStr(std::string str1, std::string str2);

	private:
		std::string _name;
		std::string _str1;
		std::string _str2;
		std::string _buffer;
		size_t _size;
};

#endif
