/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:50:20 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/24 18:57:35 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "PhoneBook.hpp"
#include    "Contact.hpp"



void    add(Contact *contact)
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

int main(int ac, char **av)
{
    PhoneBook phonebook[8];
    Contact   contact;
    std::string order;
    while (1)
    {
        std::cout << MAGENTA <<"what is your order : ADD, SEARCH or EEXIT ?" << RESET << "\n";
        std::getline(std::cin, order);
        if (order.compare("ADD") == 0)
            add(&contact);
        else if (order.compare("SEARCH") == 0)
             std::cout << "the user" << "\n";
        else if (order.compare("EXIT") == 0)
             std::cout << "exit" << "\n";
        else if (std::cin.eof())
            exit(EXIT_SUCCESS);
    }
}