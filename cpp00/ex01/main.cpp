/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:50:20 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/10 14:15:07 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "phonebook.hpp"
#include    "Contact.hpp"

int main()
{
    PhoneBook phonebook;
    std::string order;
	 int index = 0;
    while (1)
    {
        std::cout << MAGENTA <<"Please select a command : ADD, SEARCH or EEXIT ?" << RESET << "\n";

        std::getline(std::cin, order);

        if (order.compare("ADD") == 0)
		{
            phonebook.store(index);
			index++;
		}
		else if (order.compare("SEARCH") == 0)
		{
			phonebook.show_all();
		}
		else if (order.compare("EXIT") == 0)
		{
			break;
		}
    }
	return (EXIT_SUCCESS);
}
