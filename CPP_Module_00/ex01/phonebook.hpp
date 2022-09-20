/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:51:51 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/20 10:09:27 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS_NB 2
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
