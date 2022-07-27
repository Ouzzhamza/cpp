/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:51:51 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/27 09:21:38 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include  "Contact.hpp" 
# include <string>
# include <iostream>


class PhoneBook
{
    unsigned int index;
public :
    Contact contact;
    void store();
};

#endif