/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:54:27 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/22 15:32:22 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchupburger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


int type (std::string level)
{
	if (level == "DEBUG") return (1);
	if (level == "INFO") return(2);
	if (level == "WARNING") return (3);
	if (level == "ERROR" ) return (4);
	return (0);
}


void Harl::complain(std::string level)
{
	int i = type(level);
	switch(i)
	{
		case 1:
			Harl::debug();
			break;
		case 2:
			Harl::info();
			break;
		case 3:
			Harl::warning();
			break;
		case 4:
			Harl::error();
			break;
		default:
			std::cout << "nothing to print" << std::endl;
	}
}

