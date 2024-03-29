/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:13:28 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/13 16:46:22 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void test_for_int(void)
{
	std::cout << "\t\t TEST_FOR_INT" << std::endl;
	int array[2] = {10, 11};

	iter(array, 2, show);
}

void test_for_double(void)
{
	std::cout << "\t\t TEST_FOR_DOUBLE" << std::endl;
	double array[2] = {5.5, 6.01};
	iter(array, 2, show);
}

int main()
{
	test_for_int();
	test_for_double();
}

