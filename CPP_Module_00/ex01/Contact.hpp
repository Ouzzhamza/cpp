/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:47:03 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/22 10:47:45 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CONTACT_HPP)
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    unsigned int phone_number;
public:
    void    create_conact(Contact *contact);
    void    set_infos(unsigned int index, std::string information);
	void	show_contact(Contact *contact, int index);
	void	show_full_contact(Contact *contact);
};

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */

#endif // CONTACT_HPP
