/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:03:23 by egomes            #+#    #+#             */
/*   Updated: 2022/03/08 12:02:27 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {

private:
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	phone_num;
	std::string	dark_secr;
	std::string	index;
    void    printRef(std::string str);

public:
	Contact();
	~Contact();
    void    newContact(int i);
	void	print();
};

#endif