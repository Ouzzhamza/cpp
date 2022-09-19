/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:59:57 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/19 21:38:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);	
};

Weapon::~Weapon()
{

};

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType()
{
	return(this->type);
}
