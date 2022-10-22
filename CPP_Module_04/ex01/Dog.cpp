/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:06:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/22 17:51:05 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() // Default constructor
{
	std::cout << "Dog Default construct called" << std::endl;
	this->_brain = new Brain();
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
	(void) animal;
	std::cout << "Dog" << std::endl;
	this->type = animal.type;
//	this->_brain = animal._brain;
	return (*this);
}

Dog::~Dog() // Destructor 
{
	std::cout << this->type << " Destructor called" << std::endl;
	delete (_brain);

}

void Dog::makeSound() const
{
	std::cout << "Barking" << std::endl;
}
