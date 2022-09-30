/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:06:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/30 16:07:01 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() // Default constructor
{
	std::cout << "Dog Default construct called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& animal) // Copy constructor
{
	std::cout << this->type << " Copy construct called" << std::endl;
	*this = animal;
}

Dog::Dog(std::string type) // Type constructor
{
	std::cout << this->type << " Type construct called" << std::endl;
	this->type = type;
}

Dog& Dog::operator= (const Dog& animal) // Assinement operator 
{
	this->type = animal.type;
	return (*this);
}

Dog::~Dog() // Destructor 
{
	std::cout << this->type << " Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Barking" << std::endl;
}
