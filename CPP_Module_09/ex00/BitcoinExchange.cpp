/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:08:47 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/05/01 15:20:04 by ouzhamza         ###   ########.fr       */
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
	exchange();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange& other) {

	*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& other) {

	for (std::map<std::string, double>::iterator it = other._myData.begin(); it != other._myData.end(); it++) {
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
				}
				catch (const std::exception &e) {
        			std::cout << e.what() << std::endl;
    			}
			}  
		}
}


void BitcoinExchange::exchange()
{
	std::string line;
	std::ifstream infile;
	size_t i;
	infile.open(_file.c_str());
	if(!infile.is_open())
		throw std::runtime_error("Can't open data file");
	else {
			getline(infile, line);
			while (!infile.eof())
			{
				getline(infile, line);
				i = line.find("|");
				try {
					if (i != std::string::npos && parsingInput(line.substr(0, i)) && is_integer(line.substr(i + 1)))
						calculate(line.substr(0, i - 1), line.substr(i + 2));
						
				}
				catch (const std::exception &e) {
        			std::cout << e.what() << std::endl;
    			}
			}  
		}
}

void BitcoinExchange::calculate(std::string date, std::string value)
{
	double result;
	std::string str;
	std::string check;
	double val = std::atof(value.c_str());
	std::map<std::string, double>::iterator it;
	it = _myData.lower_bound(date);
	if (it->first.compare(date) != 0 && it != _myData.begin())
		it--;
	result =  it->second * val;
	std::cout <<  date + " => " + value  + " => " <<  result << std::endl;
	// std::cout << result << std::endl;
}

std::string BitcoinExchange::get_date(std::string str)
{
	size_t i;
	std::string date;
	std::string separator = ",";
	
	i = str.find(separator);
	if (i == std::string::npos)
		throw std::runtime_error("Error: bad input => " + str);
	else
		date = str.substr(0, i);
	return (date);
}

double BitcoinExchange::get_value(std::string str)
{
	size_t i;
	double number;
	std::string separator = ",";

	i = str.find(separator);
	if (i == std::string::npos)
		throw std::runtime_error("Error: bad input => " + str);
	else
		number = std::atof(str.substr(i + 1).c_str());
	return (number);
}


int BitcoinExchange::parsingInput(std::string str)
{
	struct tm time_info;	
	if (!isdigit(str[0]) || (!isdigit(str[str.length() - 1]) && str[str.length() - 1] != ' '))
		return (throw std::runtime_error("Error: bad input => " + str), 0);
	str.erase(str.length() - 1);
	std::string format = "%Y-%m-%d";
	if (strptime(str.c_str(), format.c_str(), &time_info) != NULL) {
    	if ((time_info.tm_mday >= 1 && time_info.tm_mday <= 31
        	&& time_info.tm_mon >= 0 && time_info.tm_mon <= 11
       		&& time_info.tm_year >= 0) && str.size() == 10) 
			{
				if (time_info.tm_mon == 1) {
					if (time_info.tm_mday > 29 || (time_info.tm_year % 4 != 0 && time_info.tm_mday > 28))
						return (throw std::runtime_error("Error: bad input => " + str), 0);
				}
				return(1);
			}
	}
	return (throw std::runtime_error("Error: bad input => " + str), 0);
}


int BitcoinExchange::is_integer(std::string str)
{
	if (str[1] == '-')
		return (throw std::runtime_error("Error: not a positive number."), 0);
	if (str.empty() || str[0] != ' ' || (!isdigit(str[1]) && str[1] != '+'))
		return (throw std::runtime_error("Error: bad input => " + str), 0);
	for (size_t i = 2; str[i]; i++)
		if (!isdigit(str[i]) && str[i] != '.')
			return (throw std::runtime_error("Error: bad input => " + str), 0);
	if (std::atof(str.c_str()) > 1000)
		return (throw std::runtime_error("Error: too large a number." ), 0);
	return(1);
}

int	BitcoinExchange::isLeap(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

