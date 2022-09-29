/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:47:44 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/29 18:28:47 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default construct called" << std::endl;
	this->hit = FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DimondTrap construct called" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	hit = this->FragTrap::hit;
	energy = this->ScavTrap::energy;
	damage = this->FragTrap::damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap)
{
	*this = diamondtrap;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destruct called"  << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& obj)
{
	name = obj.name;
	hit = obj.hit;
	energy = obj.energy;
	damage = obj.damage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}
