/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:40:53 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/12 00:07:44 by ouzhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BITCOINEXCHANGE

# define BITCOINEXCHANGE

#include <map>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <fstream>

class BitcoinExchange
{
private:
	std::map<std::string, int>_myData;
	std::map<std::string, int>_input;
	std::string _file;
public:
	BitcoinExchange();
	BitcoinExchange(std::string fileName);
	~BitcoinExchange();
	BitcoinExchange(BitcoinExchange& other);
	BitcoinExchange& operator = (BitcoinExchange& other);
	
	std::string get_date(std::string str);
	int         get_value(std::string str);
	int			parsingInput(std::string str, std::string type, std::string separator);
	

	void    fillMap();
};





#endif