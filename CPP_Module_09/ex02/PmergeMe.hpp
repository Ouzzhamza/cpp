/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:16:03 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/28 22:43:59 by ouzhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include <vector>
#include <deque>
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>

class PmergeMe
{
private:
	std::vector<int>_vector;
	std::deque<int>_deque;
	int number;
	double timespend;
	
public:

	PmergeMe();
	PmergeMe(char **str);
	~PmergeMe();

	void	vectorManipulation();
	void	dequeManipulation();
	void	vectorMergeSort(std::vector<int> &arr, int left, int right);
	void	vectorSort(std::vector<int> &arr, int mid, int left, int right);
	void	dequeMergeSort(std::deque<int> &arr, int left, int right);
	void	dequeSort();
	void	insertionSort();
};

	int		checkDouble(char **str);

#endif