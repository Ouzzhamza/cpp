/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzzhamza <ouzzhamza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:16:03 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/10/27 16:32:13 by ouzzhamza        ###   ########.fr       */
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
	std::vector<long >_vector;
	std::deque<long >_deque;
	long  number;
	int length;
	double timeSpendVector;
	double timeSpendDeque;
	
public:

	PmergeMe();
	PmergeMe(char **str);
	~PmergeMe();
	void	vectorManipulation(char **str);
	void	dequeManipulation(char **str);
	void	vectorMergeSort(std::vector<long> &arr, int left, int right);
	void	vectorSort(std::vector<long> &arr, int mid, int left, int right);
	void	dequeMergeSort(std::deque<long > &arr, int left, int right);
	void	dequeSort(std::deque<long > &arr, int mid, int left, int right);
	void	VectorInsertionSort(int left, int right);
	void	DequeInsertionSort(int left, int right);
};

	int 	parseAndCheck(char **str);

#endif