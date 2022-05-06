/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:33:08 by egomes            #+#    #+#             */
/*   Updated: 2022/05/05 10:42:11 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	name;
	int			age;
	int			phoneNbr;
};

uintptr_t	serialize( Data* ptr ) {
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize( uintptr_t raw ) {
	return(reinterpret_cast<Data *>(raw));
}

void	printData(Data data) {
	std::cout << "name: " << data.name << std::endl;
	std::cout << "age: " << data.age << std::endl;
	std::cout << "phoneNbr: " << data.phoneNbr << std::endl;
}

int	main() {
	
	Data	user = {"Erick", 28, 937097140};
	
	std::cout << std::endl << "====== PRINT DATA ======" << std::endl;
	printData(user);
	
	uintptr_t	raw = serialize(&user);
	Data*		converted = deserialize(raw);
	
	std::cout << std::endl << "====== PRINT INFO ======" << std::endl;
	std::cout << "raw nbr: " << raw << std::endl;
	std::cout << "user memory address: " << &user << std::endl;
	std::cout << "converted memory address: " << converted << std::endl;
	
	// changin the information

	converted->name = "James Bond";
	converted->age = 85;
	converted->phoneNbr = 666666666;
	
	std::cout << std::endl << "====== PRINT DATA CONVERTED ======" << std::endl;
	printData(*converted);
	
	std::cout << std::endl;
	return (0);
}
