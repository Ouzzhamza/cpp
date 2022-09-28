/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:47:44 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 22:28:05 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"DiamondTrap.hpp"

void DiamondTrap::whoAmI()
{
	std::cout << "I'm " << name << " and my ClapTrap name is" << FragTrap::ClapTrap::name << std::endl;
}
