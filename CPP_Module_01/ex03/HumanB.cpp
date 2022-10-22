/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:05:09 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 09:49:48 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
};

HumanB::~HumanB()
{

};

void HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon; 
};

void HumanB::attack()
{
	if (this->weapon)
		std::cout <<  this->name << " attacks with thier " << weapon->getType() << std::endl;
}
