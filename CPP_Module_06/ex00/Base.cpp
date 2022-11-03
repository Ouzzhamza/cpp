/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:14:07 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/03 17:06:00 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {}

Base::~Base() {}

Base::Base(Base const& obj)
{
	*this = obj;
}

Base& Base::operator= (Base const& obj)
{
	this->type = obj.type;
	this->str_to_convert = obj.str_to_convert;
	return(*this);
}

Base::detect_type (static std::string type, std::string str_to_convert)
{
	if (str_to_convert.lenth() == 1 && isalpha(str_to_convert[0]))
		type = "char";
	else if (isInt(str_to_convert))
		type = "int";
		
	else if (isFloat(str_to_convert))
		type = "float";

	else if (isDouble(str_to_convert))
		type = "double";
}

bool isInt(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[0] != '-' && str[0] != '+' && isdigit(str[i]))
			return (false);
	}
	if (atoi(str.c_str()) > 2147483647 || (atoi(str.c_str()) < -2147483648 && str[0] != '-'))
		return (false);
	retrun (true);
}


Bool isFloat (std::string str)
{
	
}
