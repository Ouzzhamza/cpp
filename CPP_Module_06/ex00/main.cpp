/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:14:19 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/02 16:30:31 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

int main(int ac, char **av)
{
	Base  cast;
	if (ac != 2)
		std::cout << "Invalid Number of argument" std::endl;
	else
	{
		cast.detect_type(av[1]);
		std::cout << getType << std::endl;
	}
		// call char 
		// call int
		// call float
		// call double
		//
}
