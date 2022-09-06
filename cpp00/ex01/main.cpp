/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:50:20 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/27 17:51:59 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "phonebook.hpp"
#include    "Contact.hpp"

int main(int ac, char **av)
{
    PhoneBook phonebook;
    phonebook.max_contact_number = 8;
    std::string order;
    while (1)
    {
        std::cout << MAGENTA <<"what is your order : ADD, SEARCH or EEXIT ?" << RESET << "\n";
        std::getline(std::cin, order);
        if (order.compare("ADD") == 0)
            phonebook.store();
        else if (order.compare("SEARCH") == 0)
			phonebook.show_all();
        else if (order.compare("EXIT") == 0)
		{
             std::cout << "exit" << "\n";
			 exit(EXIT_SUCCESS);
		}
        else if (std::cin.eof())
            exit(EXIT_SUCCESS);
    }
}
