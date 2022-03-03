/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:03:23 by egomes            #+#    #+#             */
/*   Updated: 2022/03/03 21:20:54 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string.h>

class Contact {
    
private:
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	phone_num;
	std::string	dark_secr;
	std::string	index;
public:
    void    AddContact();
    void    Print();

    void    setName(std::string newName) ;

};

#endif