/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:14:19 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/05 18:03:20 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

int main(int ac, char **av)
{
	Base  cast;
	if (ac != 2)
		std::cout << "Invalid Number of argument" << std::endl;
	else
	{
		cast.setType(av[1]);
		cast.detect_type();
		cast.convert();
	}
		// call char 
		// call int
		// call float
		// call double
		//
}
