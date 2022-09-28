/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:45:53 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 09:02:28 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap.hpp"

	// Type construct
ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "construct called" << std::endl;
	hit = 10;
	energy = 10;
	damage = 0;
	name = _name;
}

	//Default construc
ClapTrap::ClapTrap()
{
	std::cout << "Default construct called" << std::endl;
	name = "D.player";
	hit = 10;
	energy = 10;
	damage = 0;
}
	//Copy consstruct 
ClapTrap::ClapTrap(ClapTrap &clap)
{
	std::cout << "Copy construct called" << std::endl;
	*this = clap;
}
	// destructor
ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}


	// Assignement operator

ClapTrap& ClapTrap::operator= (const ClapTrap& claptrap)
{
	this->hit = claptrap.hit;
	this->energy = claptrap.energy;
	this->damage = claptrap.damage;
   return (*this);	
}

void ClapTrap::attack(const std::string &target)
{
	if (hit > 0 && energy > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
		energy -= 1;
	}
	else
		std::cout << "ClapTrap " << name << " can’t do anything" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit > 0)
	{
		std::cout << name << " losing " << amount << " hit points" << std::endl;
		hit -= amount;
	}
	else 
		std::cout << name << "is dead" << std::endl;
}

void ClapTrap::beRepaired (unsigned int amount)
{

	std::cout << name << " gaining " << amount << " hit points" << std::endl;
	if (amount >= 10 - hit)
		hit = 10;
	else
	{
		hit += amount;
		energy -= 1;
	}
}

	//Getter
int ClapTrap::getter(std::string type) const
{
	if (type.compare("hit") == 0)
		return (hit);
	else if (type.compare("energy") == 0)
		return (energy);
	else if (type.compare("damage") == 0)
			return (damage);	
	return (-1);
}

	// Setter
void ClapTrap::setter(std::string type, int n)
{
	std::cout << name << " getting " << n << " points of " << type << std::endl;
	if (type.compare("hit") == 0)
		hit += n;
	else if (type.compare("energy") == 0)
		energy += n;
	else if (type.compare("damage") == 0)
		damage += n;
}

