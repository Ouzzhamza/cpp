/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:12:31 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 21:05:49 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

	//Default Construct
FragTrap::FragTrap()
{
	std::cout << "FragTrap Default construct called" << std::endl;
	hit = 100;
	energy = 100;
	damage = 30;
}
	// Type Construct
FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap construct called" << std::endl;
	hit = 100;
	energy = 100;
	damage = 30;
	this->name = name;
}

	// Copy Construct
FragTrap::FragTrap(const FragTrap &scavtrap)
{
	std::cout << "Copy construct called" << std::endl;
   *this = scavtrap;
}

	// Destruct
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destruct called" << std::endl;
}

	// Assinement operator
FragTrap& FragTrap::operator= (const FragTrap& obj)
{
	this->hit = obj.hit;
	this->energy = obj.energy;
	this->damage = obj.damage;
	return (*this);
}
void FragTrap::highFivesGuys(void)
{
	std::cout << RED << name << " requests the highest of high fives!" << RESET << std::endl;
}

