/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:05:34 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/03 12:42:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#define MAX_INT 2147483647
#define MIN_INT -2147483648

#include <iostream>
#include <sstream>

class Base {
	public :

		std::string str_to_convert;
		static std::string type;

	public :

		base();
		~base();
		Base(Base const& obj);
		Base& operator= (Base const& obj);
		void setStr(std::string const& str);
		static detect_type(std::string str_to_convert);
}



#endif
