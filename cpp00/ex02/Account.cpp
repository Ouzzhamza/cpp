/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:09:53 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/13 18:50:51 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

static int  getNbAccounts( void )
{
	return(accountIndex);
}

static int  getTotalAmount( void )
{
	return (amount);
}
void _displayTimestamp(void)
{
	char str[20];
	std::time_t timestamp = std::time(NULL);
	std::strftime (str, 20, "%Y%m%d_%H%M%S", std::localtime(&timestamp));
	std::cout << "[" << str << "]" << std::endl;
}

void    displayStatus( void ) const
{
	_displayTimestamp;
}
