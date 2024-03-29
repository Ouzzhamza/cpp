/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:40:53 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/05/01 14:13:42 by ouzhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BITCOINEXCHANGE_HPP

# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, double>_myData;
		std::map<std::string, int>_input;
		std::string _file;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string fileName);
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange& other);
		BitcoinExchange& operator = (BitcoinExchange& other);
		
		std::string get_date(std::string str);
		double      get_value(std::string str);
		int			parsingInput(std::string str);
		void    	fillMap();
		void 		exchange();
		int			is_integer(std::string str);
		int			isLeap(int year);
		void		calculate(std::string date, std::string value);
};





#endif