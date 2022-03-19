/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:29 by egomes            #+#    #+#             */
/*   Updated: 2022/03/18 18:05:21 by egomes           ###   ########.fr       */
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
		StrReplace(std::string file, std::string s1, std::string s2);
		~StrReplace();
		void	validation();
		void	openFile();
		void	replaceStr();
		void	saveInFile();

	private:
		std::string	_file;
		std::string _str1;
		std::string _str2;
		std::string _buffer;
		int			_handlerError;
};

#endif
