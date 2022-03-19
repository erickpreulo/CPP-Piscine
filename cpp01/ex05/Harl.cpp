/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:41:53 by egomes            #+#    #+#             */
/*   Updated: 2022/03/19 17:11:48 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	//std::cout << "constructor" << std::endl;
}

Harl::~Harl() {
	//std::cout << "destructor" << std::endl;
}

void	Harl::debug() {
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info() {
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warnig() {
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error() {
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {
	int index = -1;

	std::string options[] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*arr_functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warnig, &Harl::error };

	for (int i = 0; i < 4; i++)
		if (options[i] == level)
			index = i;

	if (index == -1) {
		std::cout << "Level: [" << level << "] Not yet implemented!" << std::endl;
		return ;
	}
	
	(this->*arr_functions[index])();
}
