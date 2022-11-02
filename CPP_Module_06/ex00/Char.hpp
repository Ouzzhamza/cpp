/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:42:46 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/02 14:46:37 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_HPP
#define CHAR_HPP

#include <iostream>

class Char {
	
	public :
		
		Char();
		Char(Char const& obj);
		~Char();
		Char& operator= (Char const& obj);

};


#endif
