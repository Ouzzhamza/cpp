/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:55:13 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/27 11:08:44 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/******************************************************************************/
/*                       CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

Fixed::Fixed()
{
	this->integer = 0;
}

Fixed::Fixed(const int value)
{
	this->integer = value;
}

Fixed::Fixed(const float value)
{
	this->integer = roundf (value * pow(2, fbits));
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::~Fixed()
{

}

/******************************************************************************/
/*                         OVERLOADING OPERATORS                              */
/******************************************************************************/

             //ASSIGNEMENT 
Fixed& Fixed::operator= (const Fixed &fixed)
{
	this->integer = fixed.integer;
	return (*this);
}
			//COMPARISON
bool Fixed::operator< (const Fixed &obj)
{
	return (this->integer < obj.integer);
}

bool Fixed::operator<= (const Fixed &obj)
{
	return (this->integer <= obj.integer);
}

bool Fixed::operator> (const Fixed &obj)
{
	return (this->integer >= obj.integer);
}

bool Fixed::operator>= (const Fixed &obj)
{
	return (this->integer >= obj.integer);
}

bool Fixed::operator== (const Fixed &obj)
{
	return (this->integer == obj.integer);
}

bool Fixed::operator!= (const Fixed &obj)
{
	return (this->integer != obj.integer);
}
		//ARITHMATIC
Fixed Fixed::operator+ (const Fixed &obj)
{
	this->integer += obj.integer;
	return(*this);
}

Fixed Fixed::operator- (const Fixed &obj)
{
	this->integer -= obj.integer;
	return(*this);
}

Fixed Fixed::operator* (const Fixed &obj)
{
	this->integer *= obj.integer;
	return(*this);
}

Fixed Fixed::operator/ (const Fixed &obj)
{
	this->integer /= obj.integer;
	return(*this);
}

		//INCREMENT && DECREMENT

Fixed Fixed::operator++ ()
{
	integer++;;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.integer = integer;
	integer++;
	return (temp);
};

Fixed Fixed::operator-- ()
{
	integer--;
	return (*this);
}

Fixed Fixed::operator-- (int) 
{
	--integer;
	return (*this);
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


int Fixed::getRawBits(void) const
{
	return (this->integer);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << raw << std::endl;
	this->integer = raw;
}

/******************************************************************************/
/*                   	    MUMBER FUNCTIONS                                  */
/******************************************************************************/

		    //CONVERT
float Fixed::toFloat (void) const
{

	return (this->integer / pow(2, this->fbits));
}

int Fixed::toInt(void) const
{
	return (this->integer / pow(2, this->fbits));
}

			//MIN && MAX
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.integer < b.integer)
		return(a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.integer < b.integer)
	{
		std::cout << b.toFloat() <<std::endl;;
		return(b);
	}
	std::cout << b.toFloat() << std::endl;
	return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.integer < b.integer)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.integer < b.integer)
		return (b);
	return (a);
}


/******************************************************************************/
/*                        NON-MUMBER FUNCTIONS                                */
/******************************************************************************/

std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return(out);
}
