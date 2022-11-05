/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:05:34 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/05 22:07:11 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#define MAX_INT 2147483648
#define MIN_INT -2147483649

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

class Base {
	private :

		std::string str_to_convert;
		std::string type;
		char chr;
		long int	intg;
		int precision;
		double dbl;
		float flt;


	public :

		Base();
		~Base();
		Base(Base const& obj);
		Base& operator= (Base const& obj);
		void setType(std::string);
		std::string getType(void);
		void detect_type(void);
		void convert(void);
		void to_Int(void);
		void to_Char(void);
		void to_Float(void);
		void to_Double(void);
};

bool isInt(std::string str);
bool isDouble (std::string str);
 bool isFloat(std::string str);
 int apparence(std::string s, char c);

#endif
