/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:51:51 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/02 19:49:56 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS_NB 8
# include  "Contact.hpp"

class PhoneBook
{
    static int contact_number;
    Contact contact[8];
public :	
    void store(int index);
	void show_all();
    int max_contact_number;
};

#endif
