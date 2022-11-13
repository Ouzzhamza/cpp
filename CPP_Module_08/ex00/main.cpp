/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:36:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/13 19:21:35 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vs;
	int arr[4] = {10, 100, 200, 300};
	int *ptr = arr;
	for(int i = 0; i < 4; i++)
	{
		vs.push_back(*ptr);
		(*ptr)++;
	}
	try {
		easyfind(vs, 5);
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	//(void)ptr;
}
