/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:16:22 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 21:06:03 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

	//Default Construct
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default construct called" << std::endl;
	hit = 100;
	energy = 50;
	damage = 20;
}
	// Type Construct
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap construct called" << std::endl;
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
	std::cout << "ScavTrap Destruct called" << std::endl;
}

	// Assinement operator
ScavTrap& ScavTrap::operator= (const ScavTrap& obj)
{
	this->hit = obj.hit;
	this->energy = obj.energy;
	this->damage = obj.damage;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << RED  <<"ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
     if (hit > 0 && energy > 0)
 {
         std::cout << name << " attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
         energy -= 1;
     }
     else
         std::cout << "ScavTrap " << name << " can’t do anything" << std::endl;
}
