/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:21:08 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/16 21:54:38 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Contact.hpp"
#include    "PhoneBook.hpp"

// ! Setter for first name
void Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}
// ! Getter for first name
std::string Contact::getFirstName()
{
	return this->first_name;
}

// ? Setter for last name
void Contact::setLastName(std::string last_name)
{
	this->first_name = last_name;
}
// ? Getter for last name
std::string Contact::getLastName()
{
	return this->first_name;
}

// ~ Setter for nickname
void Contact::setNickName(std::string nickname)
{
	this->first_name = nickname;
}
// ~ Getter for nickname
std::string Contact::getNickName()
{
	return this->first_name;
}


// ^ Setter for darkest secret
void Contact::setSecret(std::string darkest_secret)
{
	this->first_name = darkest_secret;
}
// ^ Getter for darkest secret
std::string Contact::getSecret()
{
	return this->first_name;
}

// * Setter for phone number
void Contact::setPhoneNumber(unsigned int phone_number)
{
	this->phone_number = phone_number;
}
// * Getter for phone number
unsigned int Contact::getPhoneNumber()
{
	std::string str = std::to_string(this->phone_number);
	std::cout << "1 here " << this->phone_number << std::endl;
	if (!str[0])
		std::cout << "Error: Invalid phone number" << std::endl;
	return this->phone_number;
}
