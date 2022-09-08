/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:21:08 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/08 18:39:07 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Contact.hpp"
#include   "phonebook.hpp"


void	Contact::set_infos(Contact *contact, unsigned int i, std::string information)
{
	if (i == 0)
		this->first_name = 	information;
	else if (i == 1)
		this->last_name = information;
	else if (i == 2)
		this->nickname = information;
	else if (i == 3)
		this->darkest_secret = information;
	else if (i == 4)
	{
		char const *str = information.data();
		this->phone_number = std::atoi(str);
	}
}

void  Contact::create_conact(Contact *contact)
{
    std::string information;
    int  i = -1;
    const char* requests[5] = {"FIRST NAME ? ", "LAST NAME ? ", 
                            "NICKNAME ? ", "DARKEST SECRET ? ", "PHONE NUMBER ? "};

    while (1)
    {
        std::cout << CYAN  << requests[++i] << RESET;
        std::getline(std::cin, information);
        if (std::cin.eof())
            exit (EXIT_SUCCESS);
        else if (information.empty())
            i -=1;
        else
            contact->set_infos(contact, i, information); 
        if (i == 4)
        {
            std::cout << GREEN << "Contact added" << RESET << std::endl;
            break;
        }
            
    }
}

std::string	truncate(std::string str)
{
	if (str.length() >= 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}
	


void	Contact::show_contact(Contact *contact, int index)
{
	std::cout << "|" << std::setw(10) << index <<"|"
			  << std::setw(10) << truncate(contact->first_name) << "|"
			  << std::setw(10) << truncate(contact->last_name) << "|"
              << std::setw(10) << truncate(contact->nickname)
			  << "|" << std::endl;
}

void Contact::show_full_contact(Contact *contact)
{
	 std::cout << contact->first_name << std::endl;
	 std::cout << contact->last_name << std::endl;
	 std::cout << contact->nickname << std::endl;
	 std::cout << contact->darkest_secret << std::endl;
	 std::cout << contact->phone_number << std::endl;

}
		
