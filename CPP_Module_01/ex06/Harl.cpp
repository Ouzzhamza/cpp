/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:54:27 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 15:11:38 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
	std::cout << "[ DEBUG ] " << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchupburger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ] " << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning (void)
{
	std::cout << "[ WARNING ] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ] " << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	std::string str = "DEBUG INFO WARNING ERROR";
    size_t i = str.find(level);
    if (str[level.length() + i] != ' ' && str[level.length() + i] != '\0')
        i = -1;
    switch(i)
    {
        case 0:
            Harl::debug();
        case 6:
            Harl::info();
        case 11:
            Harl::warning();
        case 19:
	 		Harl::error();
			break;
        default:
	 		std::cout << "nothing to print" << std::endl;
     }
}

