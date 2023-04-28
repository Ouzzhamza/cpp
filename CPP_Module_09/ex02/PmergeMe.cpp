/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:15:56 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/28 22:43:24 by ouzhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	
}

PmergeMe::~PmergeMe() {
	
}

PmergeMe::PmergeMe(char **str) 
{
	size_t i;
	
	i = 1;
	while (str[i])
	{
		number = std::atoi(str[i]);
		if (number < 0 )
			throw std::invalid_argument("Error");
		else {
			_vector.push_back(number);
			_deque.push_back(number);
		}
		i++;
	}
	vectorManipulation();
	dequeManipulation();
}


void    PmergeMe::vectorManipulation()
{
	vectorMergeSort(_vector, 0, _vector.size() - 1);
	// std::cout << _vector.size() << std::endl;
	// int n = _vector.size();
	// for (int i = 0; i < n; i++) {
    //     std::cout << _vector[i] << " ";
    // }
    // std::cout << std::endl;
}

void    PmergeMe::dequeManipulation()
{
	dequeMergeSort(_deque, 0, _deque.size() - 1);
	// std::cout << _vector.size() << std::endl;
	// int n = _vector.size();
	// for (int i = 0; i < n; i++) {
    //     std::cout << _vector[i] << " ";
    // }
    // std::cout << std::endl;

}

void	PmergeMe::vectorMergeSort(std::vector<int> &arr, int left, int right)
{
		if (left < right) {
		int mid = left + (right  - left) / 2;
		vectorMergeSort(arr, left, mid);
		vectorMergeSort(arr, mid + 1, right);
		vectorSort(arr, mid, left, right);
	}
}


void	PmergeMe::dequeMergeSort(std::deque<int> &arr, int left, int right)
{
		if (left < right) {
		int mid = left + (right  - left) / 2;
		dequeMergeSort(arr, left, mid);
		dequeMergeSort(arr, mid + 1, right);
		dequeSort(arr, mid, left, right);
	}
}


void	PmergeMe::vectorSort(std::vector<int> &arr, int mid, int left, int right)
{
	std::vector<int>temp(right - left + 1);
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right) {
		
		if (arr[i] <= arr[j]) {
			
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
		}
	}
	 while (i <= mid) {
        temp[k++] = arr[i++];
    }
	while (j <= right) {
        temp[k++] = arr[j++];
    }
	for (i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
}


int checkDouble(char **str)
{
	int i = 1;
	
	int j;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (!strcmp(str[i], str[j]))
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}