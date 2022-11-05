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

std::string Base::getType(std::string const& str)
{
	return type;
}

Base::detect_type (std::string str_to_convert)
{
	if (str_to_convert.lenth() == 1 && isalpha(str_to_convert[0]))
		type = "char";
	else if (isInt(str_to_convert))
		type = "int";
		
	else if (isFloat(str_to_convert))
		type = "float";

	else if (isDouble(str_to_convert))
		type = "double";
	else
		type = "Error"
}

bool isInt(std::string str)
{
	long long  integer;

	std::stringstream(str) >> integer;

	if (integer < MIN_INT || integer > MAX_INT || str.empty())
		return (false);

	for (int i = 0; str[i]; i++)
	{
		if (str[0] != '-' && str[0] != '+' && !isdigit(str[i]))
			return (false);
	}
	retrun (true);
}


bool isDouble (std::string str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);

	if(str.empty() || str.length() <= 2 || str.length() >= 10 || apparence(str, '.') != 1)
		return (false);

	for (int i = 0; str[i]; i++)
	{
		if (str[0] != && "-" && str[0] != "+" && str[i] != '.' && !isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool isFloat(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);

	if(str.empty() || str.length() <= 3 || str.length() >= 10 || apparence(str, '.') != 1 )
		return (false);

	for (int i = 0; str[i]; i++)
	{
		if (str[0] != && "-" && str[0] != "+" && str[i] != '.' && str[i] != 'f' && i!isdigit(str[i]))
			return (false);
	}
	return (true);
}

int apparence(string s, char c)
{
    int n = 0;

    for (int i=0;i<s.length();i++)

        if (s[i] == c)
            n++;

    return n;
}
