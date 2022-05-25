/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:17:52 by egomes            #+#    #+#             */
/*   Updated: 2022/05/10 21:19:24 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int find) {
	return (std::find(container.begin(), container.end(), find));
}

template <typename T>
void    printElement(T vector, int element) {
    typename T::iterator it = easyfind(vector, element);

    if (it == vector.end()) {
        std::cout << "Error, element [" << element << "] don't exist!" << std::endl;
        return ;
    }
    std::cout << "Element: [" << *it << "]" << std::endl;
}

#endif