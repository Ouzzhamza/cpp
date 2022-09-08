/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:50:20 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/08 19:00:40 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "phonebook.hpp"
#include    "Contact.hpp"

int main(int ac, char **av)
{
    PhoneBook phonebook;
    std::string order;
    while (1)
    {
        std::cout << MAGENTA <<"Please select a command : ADD, SEARCH or EEXIT ?" << RESET << "\n";
        std::getline(std::cin, order);
        if (order.compare("ADD") == 0)
            phonebook.store();
		else if (order.compare("SEARCH") == 0)
			phonebook.show_all();
		else if (order.compare("EXIT") == 0)
			break;
    }
	return (EXIT_SUCCESS);
}
