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
	std::vector<int>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++)
	{
		vs.push_back(*ptr);
		(*ptr)++;
	}
	easyfind(vs, 5);
}


