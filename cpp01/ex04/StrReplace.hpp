/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:29 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 14:09:29 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRREPLACE_HPP
# define STRREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class StrReplace {

	public:
		StrReplace();
		StrReplace( std::string name );
		~StrReplace();
		void	openFile(char *file);
		void	replaceStr(char *str1, char *str2);

	private:
		std::string _name;
		char		*_str1;
		char		*_str2;
		std::string _buffer;
		size_t _size;
};

#endif
