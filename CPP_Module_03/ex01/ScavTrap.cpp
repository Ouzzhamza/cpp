/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:16:22 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 11:15:26 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

	//Default Construct
ScaveTrap::ScavTrap()
{
	std::cout << "ScavTrap Default construct called" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}
	// Type Construct
ScavTrap::ScavTrap(std::string name)
{
	std::cout << " ScavTrap Type construct called" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
	this->name = name;
}

	// Copy Construct
ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "Copy construct called" << std::endl;
   *this = scavtrap;
}

	// Destruct
ScavTrap::~ScavTrap()
{
	std::cout << "Destruct called" << std::endl;
}

	// Assinement operator
ScavTrap& ScavTrap::operator= (const ScavTrap& obj)
{
	this->hit = obj.hit;
	this->energy = obj.energy;
	this->damage = obj.damage;
	return (*this);
}	
