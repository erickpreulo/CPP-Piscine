/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:24:14 by egomes            #+#    #+#             */
/*   Updated: 2022/05/05 15:40:43 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>

template <class T>
void swap(T &a, T &b) {
	T hold = a;
	a = b;
	b = hold;
}

template <class T>
T min(T &a, T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <class T>
T max(T &a, T &b) {
	if (a > b)
		return (a);
	return (b);
}

#endif
