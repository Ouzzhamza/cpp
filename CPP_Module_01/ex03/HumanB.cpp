/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:05:09 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/20 16:22:19 by houazzan         ###   ########.fr       */
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
	std::cout <<  this->name << " attacks with thier " << weapon->getType() << std::endl;
}
