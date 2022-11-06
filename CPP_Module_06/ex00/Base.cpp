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
	if (str_to_convert.length() == 1 && isprint(str_to_convert[0]))
		type = "char";
	else if (isInt(str_to_convert))
		type = "int";
		
	else if (isFloat(str_to_convert))
		type = "float";

	else if (isDouble(str_to_convert))
		type = "double";
	else
		type = "undefined value";
}

void Base::convert(void)
{
	if (type == "char")
		to_Char();
	else if (type == "int")
		to_Int();
	else if (type == "float")
		to_Float();
	else if (type == "double")
		to_Double();
}

void Base::print_type(void)
{
	if (type == "undefined value")
		std::cout << type << std::endl;
	else if (str_to_convert == "nan" || str_to_convert == "+inf"  || str_to_convert == "-inf")
		print_nan();
	else if (str_to_convert == "nanf" || str_to_convert == "+infff"  || str_to_convert == "-inff")
		print_nanf();
	else
	{
		print_char();
		print_int();
		print_double();
		print_float();
	}
}


void Base::print_char()
{
	if (isprint(chr))
		std::cout << "char: " << chr << std::endl;
	else
		std::cout << "char; Non displayable" << std::endl;
}

void Base::print_int()
{
	std::cout << "int: " << intg << std::endl;;
}

void Base::print_double()
{
	std::cout << "double: " << std::fixed << std::setprecision(precision) << dbl << std::endl;
}

void Base::print_float()
{
	std::cout << "float: " << std::fixed << std::setprecision(precision) << flt << "f" << std::endl;
}

void Base::print_nan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int:  impossible" << std::endl;
	std::cout << "double: " <<  str_to_convert << std::endl;
	std::cout << "float: " << str_to_convert + "f" << std::endl;
}

void Base::print_nanf()
{
	int i = str_to_convert.size() - 1;
	str_to_convert.erase(i);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int:  impossible" << std::endl;
        std::cout << "double: " << str_to_convert << std::endl;
        std::cout << "float: " << str_to_convert + "f" << std::endl;
}


void Base::to_Char(void)
{
	this->chr = str_to_convert[0];
	this->intg =  static_cast<int>(chr);
	this->dbl = static_cast<double>(chr);
	this->flt = static_cast<float>(chr);
}

void Base::to_Int(void)
{
	std::stringstream(str_to_convert) >> this->intg;
	this->chr = static_cast<char>(intg);
	this->dbl = static_cast<double>(intg);
	this->flt = static_cast<float>(intg);
}

void Base::to_Double(void)
{
	std::stringstream(str_to_convert) >> this->dbl;
	this->chr = static_cast<char>(dbl);
	this->intg =  static_cast<int>(dbl);
	this->flt = static_cast <float>(dbl);
}

void Base::to_Float(void)
{
	std::stringstream(str_to_convert) >> this->flt;
	this->chr = static_cast<char>(flt);
	this->intg = static_cast<int>(flt);
	this->dbl = static_cast<double>(flt);
}

bool Base::isInt(std::string str)
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


bool Base::isDouble (std::string str)
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
	precision = str_to_convert.length() - (str_to_convert.find(".") + 1);
	return (true);
}

bool Base::isFloat(std::string str)
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
	precision = str_to_convert.length() - (str_to_convert.find(".") + 2);
	return (true);
}

int Base::apparence(std::string s, char c)
{
    int n = 0;

    for (size_t i=0; i < s.length(); i++)

        if (s[i] == c)
            n++;

    return n;
}
