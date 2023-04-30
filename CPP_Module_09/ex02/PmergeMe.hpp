/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:16:03 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/30 19:42:25 by ouzhamza         ###   ########.fr       */
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
#include <ctime>

class PmergeMe
{
private:
	std::vector<int>_vector;
	std::deque<int>_deque;
	int number;
	int length;
	double timeSpendVector;
	double timeSpendDeque;
	
public:

	PmergeMe();
	PmergeMe(char **str);
	~PmergeMe();

	void	vectorManipulation(char **str);
	void	dequeManipulation(char **str);
	void	vectorMergeSort(std::vector<int> &arr, int left, int right);
	void	vectorSort(std::vector<int> &arr, int mid, int left, int right);
	void	dequeMergeSort(std::deque<int> &arr, int left, int right);
	void	dequeSort(std::deque<int> &arr, int mid, int left, int right);
	void	VectorInsertionSort(int left, int right);
	void	DequeInsertionSort(int left, int right);
};

	int		checkDouble(char **str);

#endif