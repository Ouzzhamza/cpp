/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:25:33 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/25 17:57:21 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() // Default constructor
{
	std::cout << "Cat Default construct called" << std::endl;
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
	this->type = animal.type;
	return (*this);
}

Cat::~Cat() // Destructor 
{
	std::cout << this->type << " Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meowing" << std::endl;
}
