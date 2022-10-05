/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:07:15 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/05 17:32:02 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->countContact = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::viewContacts(void) const
{
	int	i;

	i = 0;
	std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < this->countContact)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		if (this->contact[i].getFirstName().length() > 10)
			std::cout << this->contact[i].getFirstName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contact[i].getFirstName() << "|";
		if (this->contact[i].getLastName().length() > 10)
			std::cout << this->contact[i].getLastName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contact[i].getLastName() << "|";
		if (this->contact[i].getNickName().length() > 10)
			std::cout << this->contact[i].getNickName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contact[i].getNickName() << "|";
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::viewFullInfo(Contact data) const
{
	std::cout << "First name: " << data.getFirstName() << std::endl;
	std::cout << "Last name: " << data.getLastName() << std::endl;
	std::cout << "Nick name: " << data.getNickName() << std::endl;
	std::cout << "Phone number: " << data.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << data.getDarkestSecret() << std::endl;
}

void	PhoneBook::getNumContact(void) const
{
	std::string	searchIndex;
	int			index;

	std::cout << "Enter number of contact: " << std::endl;
	getline(std::cin, searchIndex);
	index = atoi(searchIndex.c_str());
	if (index <= 0 || index > this->countContact)
	{
		std::cout << "Contact not found" << std::endl;
		return ;
	}
	viewFullInfo(contact[index - 1]);
}

void	PhoneBook::getMenu(void)
{
	std::cout << "You can use next commands:" << std::endl;
	std::cout << "ADD - adding a contact" << std::endl;
	std::cout << "SEARCH - find a contact" << std::endl;
	std::cout << "EXIT - exit from PhoneBook" << std::endl;
}

void	PhoneBook::addContact(void)
{
	std::cout << "Add contact" << std::endl;
	if (this->countContact == 8 || this->countContact == 0)
	{
		this->contact[0].setData();
		if (this->contact[0].isEmptyContact())
		{
			std::cout << "Warning! You enter empty contact" << std::endl;
			this->contact[0] = Contact();
			this->countContact--;
		}
	}
	else
	{
		this->contact[countContact].setData();
		if (this->contact[countContact].isEmptyContact())
		{
			std::cout << "Warning! You enter empty contact" << std::endl;
			this->contact[countContact] = Contact();
			this->countContact--;
		}
	}
	this->countContact++;
	std::cout << "Count contact: " << this->countContact << std::endl;
}

void	PhoneBook::searchContact() const
{
	if (this->countContact == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	viewContacts();
	getNumContact();
}
