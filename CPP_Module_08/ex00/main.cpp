/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:36:11 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/14 16:05:05 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


void test_vector()
{

	int arr[4] = {10, 100, 200, 300};
	std::vector<int> vs;
	int *ptr = arr;
	for(int i = 0; i < 4; i++)
	{
		vs.push_back(*ptr);
		ptr++;
	}
	try {
		easyfind(vs, 100);
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
}

void test_array()
{

	std::array<int, 10> arr;
	int j = 0;
	for (std::array<int, 10>::iterator it = arr.begin(); it != arr.end(); it++)
	{
		*it = j;
		j++;
	}
	try {
		easyfind(arr, 9);
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
}

void test_list()
{
	std::list<int> list1;
	for (int i = 0; i < 10; i++)
	{
		list1.push_back(i);
	}
	try {
		easyfind(list1, 9);
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
}

void test_deque()
{
	std::deque<int> deque1;
	for (int i = 0; i < 10; i++)
	{
		deque1.push_back(i);
	}
	try {
		easyfind(deque1, 10);
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
}
int main()
{
	test_vector();
	test_array();
	test_list();
	test_deque();
}
