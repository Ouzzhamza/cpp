/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:30:12 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/27 18:22:00 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Contact.hpp"
#include    "phonebook.hpp"

int PhoneBook::number_of_contacts = 0;

void    PhoneBook::store()
{
	int index;
	index = number_of_contacts;
	if (index == 8)
		index = 0;
	contact[index].create_conact(&contact[index]);
	number_of_contacts++;
}


void	PhoneBook::show_all()
{
	std::cout << "|" << std::setw(10) << "index" <<"|" << 
			  << "|" << std::setw(10) << "first_name" << "|" <<
			  << "|" << std::setw(10) << "last_name" << "|" <<
              << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < number_of_contacts; i++)
			contact[i].show_contact(&contact[i]);
}
