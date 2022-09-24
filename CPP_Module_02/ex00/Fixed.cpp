/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:46:42 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/24 17:52:38 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->a = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
};

Fixed::~Fixed()
{
	std::cout << "Distructor called" << std::endl;
};

Fixed& Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->a = fixed.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	(void)raw;
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->a);
}

