/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:08:47 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/12 02:46:44 by ouzhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string fileName) {
	_file = "data.csv";
	fillMap();
	_file = fileName;
	fillMap();
	exchange();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& other) {

	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& other) {

	for (std::map<std::string, int>::iterator it = other._myData.begin(); it != other._myData.end(); it++) {
		this->_myData[it->first] = it->second;
	}
	return *this;  
}

void BitcoinExchange::fillMap()
{
	std::string line;
	std::ifstream infile;
	infile.open(_file.c_str());
	if(!infile.is_open())
		throw std::runtime_error("Can't open data file");
	else {
			getline(infile, line);
			while (!infile.eof())
			{
				getline(infile, line);
				try {
					if (!_file.compare("data.csv"))
						_myData[get_date(line)] =  get_value(line);
					else
						_input[get_date(line)] =  get_value(line);
				}
				catch (const std::exception &e) {
        			std::cout << e.what() << std::endl;
    			}
			}  
		}
}

std::string BitcoinExchange::get_date(std::string str)
{
	size_t i;
	std::string date;
	std::string separator = "|";
	if (!_file.compare("data.csv"))
		separator = ",";
	i = str.find(separator);
	if (_file.compare("data.csv"))
		i -= 1;
	if (i == std::string::npos  || !parsingInput(str.substr(0, i), "date", separator))
		throw std::runtime_error("Error: bad input => " + str);
	else
		date = str.substr(0, i - 1);
	return (date);
}

int BitcoinExchange::get_value(std::string str)
{
	size_t i;
	int number;
	std::string separator = "|";
	if (!_file.compare("data.csv"))
		separator = ",";
	i = str.find(separator);
	if (i == std::string::npos  || !parsingInput(str.substr(i + 1), "value", separator))
		return (0);
	else
		number = std::atoi(str.substr(i + 1).c_str());
	return (number);
}


int BitcoinExchange::parsingInput(std::string str, std::string type, std::string separator)
{
	 struct tm time_info;
	if (!type.compare("date")) {

		std::string format = "%Y-%m-%d";
		if (strptime(str.c_str(), format.c_str(), &time_info) != NULL) {
        	if ((time_info.tm_mday >= 1 && time_info.tm_mday <= 31
            	&& time_info.tm_mon >= 0 && time_info.tm_mon <= 11
           		&& time_info.tm_year >= 0) && str.size() == 10) 
				{
					if (time_info.tm_mon == 1) {
						
						if (time_info.tm_mday > 29)
							return (0);
						if (time_info.tm_year % 4 != 0 && time_info.tm_mday > 28)
							return (0);
					}
					return(1);
				}
		}
		return (0);
	}
	else if (!type.compare("value")) {
		if (std::atoi(str.c_str()) < 0)
			throw std::runtime_error("Error: not a positive number.");
		if (!separator.compare("|") && std::atoi(str.c_str()) > 1000)
			throw std::runtime_error("Error: too large a number.");
		return (1);
	}
	return(0);
}


