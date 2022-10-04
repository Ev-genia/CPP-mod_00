/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:03:06 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/04 15:08:53 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"


# include <iostream>
# include <string.h>
# include <iomanip>

class PhoneBook
{
private:
	Contact	contact[8];
	int		countContact;
	void	viewContacts() const;
	void	viewFullInfo(Contact contact) const;
	void	getNumContact() const;
public:
	PhoneBook();
	~PhoneBook();
	void	getMenu();
	void	addContact();
	void	searchContact() const;
};

#endif