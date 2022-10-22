/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:06:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/22 13:26:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() // Default constructor
{
	std::cout << "Wolf Default construct called" << std::endl;
	this->type = "Wolf";
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal) // Copy constructor
{
	std::cout << this->type << " Copy construct called" << std::endl;
	*this = animal;
}

WrongAnimal::WrongAnimal(std::string type) // Type constructor
{
	std::cout << this->type << " Type construct called" << std::endl;
	this->type = type;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& animal) // Assinement operator 
{
	this->type = animal.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() // Destructor 
{
	std::cout << this->type << " Destructor called" << std::endl;
}


const std::string& WrongAnimal::getType() const 
{
	return (type);
}	

void WrongAnimal::makeSound() const
{
	std::cout << "Howling" << std::endl;
}
