/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:06:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/05 16:46:40 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() // Default constructor
{
	std::cout << "Wolf Default construct called" << std::endl;
	this->type = "Wolf";
}

Animal::Animal(const Animal& animal) // Copy constructor
{
	std::cout << this->type << "Copy construct called" << std::endl;
	*this = animal;
}

Animal::Animal(std::string type) // Type constructor
{
	std::cout << this->type << "Type construct called" << std::endl;
	this->type = type;
}

Animal& Animal::operator= (const Animal& animal)// Assinement operator 
{
	this->type =  animal.type;
	return (*this);
}

Animal::~Animal() // Destructor 
{
	std::cout << "Wolf Destructor called" << std::endl;
}


const std::string& Animal::getType() const 
{
	return (type);
}	

void Animal::makeSound() const
{
	std::cout << "Howling" << std::endl;
}
