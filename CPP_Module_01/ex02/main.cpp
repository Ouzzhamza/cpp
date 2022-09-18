/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:38:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/18 19:33:34 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable: "<< &str << std::endl;
	std::cout << "The memory address held by stringPTR: "<< stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: "<< &stringREF << std::endl;
	std::cout << "The value of the string variable: "<< str << std::endl;
	std::cout << "The value pointed to by stringPTR: "<< *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: "<< stringREF << std::endl;

	return(0);

}	
