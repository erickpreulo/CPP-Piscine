/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:29:36 by egomes            #+#    #+#             */
/*   Updated: 2022/03/07 18:53:16 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"

class PhoneBook {

private:
    int _size;
    int _i;
    Contact _contacts[8];

public:
    PhoneBook();
    ~PhoneBook();
    void    addContact();
    void    printContacts();
};

#endif