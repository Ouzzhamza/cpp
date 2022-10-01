/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:06:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 11:30:04 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() // Default constructor
{
	std::cout << "WrongCat Default construct called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& animal) // Copy constructor
{
	std::cout << this->type << " Copy construct called" << std::endl;
	*this = animal;
}

WrongCat::WrongCat(std::string type) // Type constructor
{
	std::cout << this->type << " Type construct called" << std::endl;
	this->type = type;
}

WrongCat& WrongCat::operator= (const WrongCat& animal) // Assinement operator 
{
	this->type = animal.type;
	return (*this);
}

WrongCat::~WrongCat() // Destructor 
{
	std::cout << this->type << " Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meowing" << std::endl;
}
