/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:53:28 by egomes            #+#    #+#             */
/*   Updated: 2022/03/02 22:25:37 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string.h>

typedef struct s_book {
	std::string	f_name[8];
	std::string	l_name[8];
	std::string	n_name[8];
	std::string	phone_num[8];
	std::string	dark_secr[8];
	std::string	index[8];
}	t_book;

#endif