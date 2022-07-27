/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:50:20 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/26 16:03:53 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "PhoneBook.hpp"
#include    "Contact.hpp"

int main(int ac, char **av)
{
    PhoneBook phonebook;
    std::string order;
    while (1)
    {
        std::cout << MAGENTA <<"what is your order : ADD, SEARCH or EEXIT ?" << RESET << "\n";
        std::getline(std::cin, order);
        if (order.compare("ADD") == 0)
            phonebook.store();
        else if (order.compare("SEARCH") == 0)
             std::cout << "the user" << "\n";
        else if (order.compare("EXIT") == 0)
             std::cout << "exit" << "\n";
        else if (std::cin.eof())
            exit(EXIT_SUCCESS);
    }
}