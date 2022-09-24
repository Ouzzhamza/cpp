/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:42:02 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/24 16:08:33 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include	<iostream>

class Fixed{

	private:

		int a;
		static const int b = 8; 

	public:

		Fixed();
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed& operator= (const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};



#endif
