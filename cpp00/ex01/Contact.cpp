/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:21:08 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/24 18:34:49 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Contact.hpp"
#include    "PhoneBook.hpp"


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
