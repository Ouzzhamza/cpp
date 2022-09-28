/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:12:59 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 11:27:16 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon)
{
	this->name = _name;
};

HumanA::~HumanA()
{

};

void HumanA::attack()
{
	std::cout << this->name << " attacks with thier " << weapon.getType() << std::endl;
};

