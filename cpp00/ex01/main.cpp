/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:50:20 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/16 21:35:57 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "PhoneBook.hpp"
#include    "Contact.hpp"

void    add(Contact *contact)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string secret;
    unsigned int phone_number;
    std::cout << "Enter first name: ";  
    std::cin >> first_name;
    contact->setFirstName(std::string(first_name));
    contact->getFirstName();
    std::cout << "Enter Last name: ";  
    std::cin >> last_name;
    contact->setLastName(std::string(last_name));
    contact->getLastName();
    std::cout << "Enter nickname: ";  
    std::cin >> nickname;
    contact->setNickName(std::string(nickname));
    contact->getNickName();
    std::cout << "Enter the darkest secret: ";  
    std::cin >> secret;
    contact->setSecret(std::string(secret));
    contact->getSecret();
    std::cout << "Enter the phone number: ";  
    std::cin >> phone_number;
    contact->setPhoneNumber((phone_number));
    contact->getPhoneNumber();
}

int main(int ac, char **av)
{
    PhoneBook phonebook[8];
    Contact   contact;

    std::string order;
    std::cout << "do you want to : ADD, SEARCH or EEXIT ?" << "\n";
     std::cin >> order;
    if (order.compare("ADD") == 0)
    // for (int i = 0; i < 8; i++)
    // {
    add(&contact);
    // }
    else if (order.compare("SEARCH") == 0)
         std::cout << "the user" << "\n";
    else if (order.compare("EXIT") == 0)
         std::cout << "exit" << "\n";
        
}