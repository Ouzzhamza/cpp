/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:26:33 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/25 17:26:39 by houazzan         ###   ########.fr       */
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
