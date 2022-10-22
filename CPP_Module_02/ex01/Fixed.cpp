/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:53:02 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/06 20:03:19 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->integer = value * pow(2, fbits);
};

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->integer = roundf (value * pow(2, fbits));
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
};

Fixed &Fixed::operator= (const Fixed& fixed)
{
	std::cout  << "Copy assignment operator called" << std::endl;
	this->integer = fixed.getRawBits();
	return(*this);
}

void Fixed::setRawBits(int const raw)
{
		this->integer = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->integer);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const
{
	return(this->integer / pow(2, fbits));	
}

int Fixed::toInt(void) const
{
	return(this->integer / pow(2, fbits));
};

std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return(out);
}
