/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:14:42 by egomes            #+#    #+#             */
/*   Updated: 2022/05/10 21:15:42 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int		main() {
	std::vector<int> A;
    A.push_back(5);
    A.push_back(42);
    A.push_back(60);
    A.push_back(77);
    printElement(A, 15);

    std::list<int> B;
    B.push_back(6);
    B.push_back(77);
    B.push_back(534);
    B.push_back(78);
    B.push_back(2);
    printElement(B, 78);
}
