/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:48:37 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/04 16:33:03 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	PhoneBook	book;
	std::string	cmd;
	
	book.getMenu();
	while(1)
	{
		std::cout << "Enter the command:" << std::endl;
		if (!std::getline(std::cin, cmd))
		{
			std::cout << "Exit" << std::endl;
			return (1);
		}
		else if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			book.addContact();
		else if (cmd == "SEARCH")
			book.searchContact();
		else
			std::cout << "Command not found" << std::endl;
	}
	return (0);
}
