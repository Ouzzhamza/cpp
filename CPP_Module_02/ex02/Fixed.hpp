/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:52:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/25 19:44:38 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include	<iostream>

class Fixed
{
	private:

		static int integer;
		const int cinteger;
		static const int fbits = 8;
		
	public:
		
		Fixed();
			
		static &min(static int &a, static int &b);
		static &min(const int &a, const int &b);
		static &max(static int &a, static int &b);
		static &max(const int &a, const int &b);
};

#endif
