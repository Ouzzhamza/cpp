/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:30:12 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/12 16:50:20 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Contact.hpp"
#include    "phonebook.hpp"

int PhoneBook::contact_number = 0;

void    PhoneBook::store(int index)
{
	index = index % MAX_CONTACTS_NB;

	contact[index].create_conact(&contact[index]);

	if (contact_number < MAX_CONTACTS_NB)
			contact_number++;
}

void print_columns()
{
	 std::cout << "|" << std::setw(10) << "index" <<"|"
              << std::setw(10) << "first_name" << "|"
              << std::setw(10) << "last_name" << "|"
              << std::setw(10) << "nickname" << "|" << std::endl;
}

void	PhoneBook::show_all()
{
	int index;
	bool check = false;

	if (contact_number == 0)
	{
		std::cout << "No contact found" << std::endl;
		return ;
	}

	print_columns();

	for (int i = 0; i < contact_number; i++)
	{
			contact[i].show_contact(&contact[i], i + 1);
	}
	while(!check)
	{
		std::cout << "Index >";
		std::cin >> index;
		if (std::cin.eof())
			exit(0);
		if(std::cin.fail())
		{
			std::cout << "Invalid index" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}
		else
		{
			contact[index].show_full_contact(&contact[index - 1]);
			check = true;
			std::cin.clear();
            std::cin.ignore();
		}
	}
}
