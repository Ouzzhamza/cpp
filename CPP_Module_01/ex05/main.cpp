/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:48:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/21 20:57:04 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of parameters" << std::endl;
		return(0);
	}
	else
	{
		std::string choice = av[1];
		Harl::complain(choice);
	}
	return (0);
}
