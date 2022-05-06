/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:43:18 by egomes            #+#    #+#             */
/*   Updated: 2022/05/05 16:09:30 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class T>
void	print(T &content) {
	std::cout << content << std::endl;
}

template <class T, class U>
void	iter(T array[], int size, U function) {
	for (int i = 0; i < size; i++)
		function(array[i]);
}

#endif