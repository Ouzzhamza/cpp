/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:06:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/23 18:24:17 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() // Default constructor
{
	std::cout << "Cat Default construct called" << std::endl;
	this->_brain = new Brain();
	this->type = "Cat";
}

Cat::Cat(const Cat& animal) // Copy constructor
{
	std::cout << this->type << " Copy construct called" << std::endl;
	*this = animal;
}

Cat::Cat(std::string type) // Type constructor
{
	std::cout << this->type << " Type construct called" << std::endl;
	this->type = type;
}

Cat& Cat::operator= (const Cat& animal) // Assinement operator 
{
	Brain *temp = new Brain();
	*temp = *animal._brain;
	this->_brain = temp;
	this->type = animal.type;
	return (*this);
}

Cat::~Cat() // Destructor 
{
	std::cout << this->type << " Destructor called" << std::endl;
	delete (_brain);
}

void Cat::makeSound() const
{
	std::cout << "Meowing" << std::endl;
}
