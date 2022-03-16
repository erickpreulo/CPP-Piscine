/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:41:06 by egomes            #+#    #+#             */
/*   Updated: 2022/03/16 14:54:55 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include "StrReplace.hpp"

class Replace {

	public:
		Replace();
		Replace( std::string name );
		~Replace();
		void	replaceFile(char *file, char *str1, char *str2);

	private:
		std::string name;
		StrReplace cmd;
};


#endif
