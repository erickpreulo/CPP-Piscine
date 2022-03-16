/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:29:29 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 23:09:49 by egomes           ###   ########.fr       */
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
		StrReplace(std::string s1, std::string s2);
		~StrReplace();
		void	openFile(std::string file);
		void	replaceStr();

	private:
		std::string _str1;
		std::string _str2;
		std::string _buffer;
};

#endif
