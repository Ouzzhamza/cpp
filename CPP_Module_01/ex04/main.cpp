/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:05:22 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/21 19:07:56 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include 	<fstream>
#include	<string>


std::string replace_line(std::string line, char **av)
{
	int index = line.find(av[2]);
	int len = strlen(av[2]);
	line.erase(index, len);
	line.insert(index, av[3]);
	return(line);
}

int main(int ac, char **av)
{
	std::string  line;
	if (ac != 4)
	{
		std::cout << "Wrong number of parameters" << std::endl;
		return (0);
	}
	std::ifstream infile(av[1]);
	std::string s = strtok(av[1], ".");
	std::ofstream outfile(s + ".replace");
	if (infile.is_open())
   	{
	   	while (infile)
		{
			std::getline(infile, line);
			if (infile.eof())
				break;
			while (line.find(av[2]) != std::string::npos)
				line = replace_line(line, av);
			outfile << line << std::endl;
		}
	}
	else
		std::cout << "Can't open" << av[1] << std::endl;
	outfile.close();
	infile.close();
	return(0);
}
