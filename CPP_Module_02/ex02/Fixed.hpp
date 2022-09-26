/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:52:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/26 20:46:06 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include	<iostream>
#include	<cmath>

class Fixed{

	private:

		int integer;
		static const int fbits = 8;

	public:

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

		// DEFAULT
		Fixed();
		
		// TYPE CONSTRUCTORS
		Fixed(const int value);	
		Fixed(const float value);
		
		// COPY CONSTRUCTOR
		Fixed(const Fixed &obj);

		// DEFAULT DESTRUCTOR
		~Fixed();
		
/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/
		// ASSIGNEMENT
		Fixed& operator= (const Fixed &fixed);

		// COMPARISON
		bool operator< (const Fixed &obj);
		bool operator<= (const Fixed &obj);
		bool operator> (const Fixed &obj);
		bool operator>= (const Fixed &obj);
		bool operator== (const Fixed &obj);
		bool operator!= (const Fixed &obj);
		// ARITHMATIC
		Fixed& operator+ (const Fixed &obj);
		Fixed& operator- (const Fixed &obj);
		Fixed& operator* (const Fixed &obj);
		Fixed& operator/ (const Fixed &obj);
		// INCREMENT && DECREMENT 
		Fixed& operator++ ();
		Fixed& operator++ (int);
		Fixed& operator-- ();
		Fixed& operator-- (int);


/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

		int getRawBits( void ) const;
		void setRawBits( int const raw );

/******************************************************************************/
/*                   	    MUMBER FUNCTIONS                                  */
/******************************************************************************/

		//CONVERT
		float toFloat( void ) const;
		int toInt( void ) const;

		// MIN AND MAX
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

/******************************************************************************/
/*                        NON-MUMBER FUNCTIONS                                */
/******************************************************************************/

std::ostream &operator << (std::ostream &out, const Fixed &obj);

#endif
