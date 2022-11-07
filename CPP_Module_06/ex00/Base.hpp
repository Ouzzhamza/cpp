/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:05:34 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/07 21:28:40 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#define MAX_INT 2147483647
#define MIN_INT -2147483648

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

class Base {
	private :

		std::string literal;
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
		void print_type(void);
		void convert(void);
		void to_Int(void);
		void to_Char(void);
		void to_Float(void);
		void to_Double(void);
		void print_nan();
		void print_nanf();
		void print_int();
		void print_char();
		void print_double();
		void print_float();
		bool isInt(std::string str);
		bool isDouble (std::string str);
		bool isFloat(std::string str);
		int apparence(std::string s, char c);

};
 
#endif
