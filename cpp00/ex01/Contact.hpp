/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:47:03 by houazzan          #+#    #+#             */
/*   Updated: 2022/06/17 15:35:22 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CONTACT_HPP)
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    unsigned int phone_number;
public:
    std::string getFirstName();
    void setFirstName(std::string first_name);

     std::string getLastName();
    void setLastName(std::string last_name);

     std::string getNickName();
    void setNickName(std::string nick_name);

     std::string getSecret();
    void setSecret(std::string darkest_secret);
    
     unsigned int getPhoneNumber();
    void setPhoneNumber(unsigned int phone_number);
};


#endif // CONTACT_HPP