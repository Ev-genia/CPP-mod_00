/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:07:32 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/04 16:31:55 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

Contact::~Contact(void)
{
}

void	Contact::setFirstName(std::string str)
{
	this->firstName = str;
}

void	Contact::setLastName(std::string str)
{
	this->lastName = str;
}

void	Contact::setNickName(std::string str)
{
	this->nickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
}

void	Contact::setData(void)
{
	std::string	word;

	std::cout << "Please, Enter first name" << std::endl;
	std::getline(std::cin, word);
	this->setFirstName(word);

	std::cout << "Please, Enter last name" << std::endl;
	std::getline(std::cin, word);
	this->setLastName(word);

	std::cout << "Please, Enter nick name" << std::endl;
	std::getline(std::cin, word);
	this->setNickName(word);

	std::cout << "Please, Enter phone number" << std::endl;
	std::getline(std::cin, word);
	this->setPhoneNumber(word);

	std::cout << "Please, Enter darkest secret" << std::endl;
	std::getline(std::cin, word);
	this->setDarkestSecret(word);

	std::cout << "New contact is created!" << std::endl;
}

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}

bool	Contact::isEmptyContact(void) const
{
	if (this->getFirstName().empty())
		return (true);
	if (this->getLastName().empty())
		return (true);
	if (this->getNickName().empty())
		return (true);
	if (this->getPhoneNumber().empty())
		return (true);
	if (this->getDarkestSecret().empty())
		return (true);
	return (false);
}
