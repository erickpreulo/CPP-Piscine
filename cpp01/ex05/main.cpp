/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:42:12 by egomes            #+#    #+#             */
/*   Updated: 2022/03/19 17:11:43 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main() {
	Harl person;

	person.complain("DEBUG");
	person.complain("INFO");
	person.complain("WARNING");
	person.complain("ERROR");
	person.complain("BLABLA");

	return (0);
}