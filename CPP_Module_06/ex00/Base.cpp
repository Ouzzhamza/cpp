/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:14:07 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/05 22:07:03 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
	precision = 1;
	chr = '\0';
	intg = MAX_INT;
	dbl = MAX_INT;
	flt = MAX_INT;
}

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

std::string Base::getType(void)
{
	return type;
}

void Base::setType(std::string str)
{
	this->str_to_convert = str;
}
void Base::detect_type (void)
{
	if (str_to_convert.length() == 1 && isalpha(str_to_convert[0]))
		type = "char";
	else if (isInt(str_to_convert))
		type = "int";
		
	else if (isFloat(str_to_convert))
		type = "fltt";

	else if (isDouble(str_to_convert))
		type = "dble";
	else
		type = "undefined value";
}

void Base::convert(void)
{
	if (type == "char")
		to_Char();
	else if (type == "int")
		to_Int();
	else if (type == "fltt")
		to_Float();
	else if (type == "dble")
		to_Double();
	else
		std::cout << "undefined value" << std::endl;
}


void Base::to_Char(void)
{
	this->chr = str_to_convert[0];
	this->intg =  static_cast<int>(chr);
	this->dbl = static_cast<double>(chr);
	this->flt = static_cast<float>(chr);
//	std::cout  << std::fixed  << std::setprecision(precision) << flt << std::endl;
}

void Base::to_Int(void)
{
	std::stringstream(str_to_convert) >> this->intg;
	this->chr = static_cast<char>(intg);
	this->dbl = static_cast<double>(intg);
	this->flt = static_cast<float>(intg);
//	std::cout << this->flt << std::endl;	
}

void Base::to_Double(void)
{
	std::stringstream(str_to_convert) >> this->dbl;
	this->chr = static_cast<char>(dbl);
	this->intg =  static_cast<int>(dbl);
//	std::cout << intg  << std::endl;
}

void Base::to_Float(void)
{
	std::stringstream(str_to_convert) >> this->flt;
	std::cout << flt << std::endl;
}

bool isInt(std::string str)
{
	long long  intger;
	int i = 0;
	std::stringstream(str) >> intger;

	if (intger < MIN_INT || intger > MAX_INT || str.empty())
		return (false);

	if (str[i] == '-' || str[i] == '+')
		i++;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return(true);
}


bool isDouble (std::string str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);

	if(str.empty() || str.length() <= 2 || str.length() >= 10 || apparence(str, '.') != 1)
		return (false);

	for (int i = 0; str[i]; i++)
	{
		if (str[0] != '-' && str[0] != '+' && str[i] != '.' && !isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool isFloat(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);

	if(str.empty() || str.length() <= 3 || str.length() >= 10 || apparence(str, '.') != 1 || apparence(str, 'f') != 1)
		return (false);

	for (int i = 0; str[i]; i++)
	{
		if (str[0] != '-' && str[0] != '+' && str[i] != '.' && str[i] != 'f' && !isdigit(str[i]))
			return (false);
	}
	return (true);
}

int apparence(std::string s, char c)
{
    int n = 0;

    for (size_t i=0; i < s.length(); i++)

        if (s[i] == c)
            n++;

    return n;
}
