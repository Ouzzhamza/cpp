/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzzhamza <ouzzhamza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:15:56 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/10/27 16:37:00 by ouzzhamza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	
}

PmergeMe::~PmergeMe() {
	
}

PmergeMe::PmergeMe(char **str) 
{
	length = 2;
	vectorManipulation(str);
	dequeManipulation(str);
	std::cout << "Before: ";
	for (int i = 1; str[i]; i++) {
        std::cout << str[i] << " ";
    }
    std::cout << std::endl;
	
	
	std::cout << "After:  ";
	int n = _vector.size();
	for (int i = 0; i < n; i++) {
        std::cout << _vector[i] << " ";
    }
    std::cout << std::endl;
	std::cout << "Time to process a range of "<< _vector.size() << " elements with std::vector :" << timeSpendVector << " seconds" << std::endl;
	
	std::cout << "Time to process a range of "<< _deque.size() << " elements with std::deque :" << timeSpendDeque << " seconds" << std::endl;
	
}


void    PmergeMe::vectorManipulation(char **str)
{

	size_t i;
	
	i = 1;
	std::clock_t start, end; 
	start = std::clock();
	while (str[i])
	{
		number = std::atol(str[i]);
		if (number < 0)
			throw std::invalid_argument("Error");
		else 
			_vector.push_back(number);
		i++;
	}

	vectorMergeSort(_vector, 0, _vector.size() - 1);
	end = std::clock();
	timeSpendVector = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void    PmergeMe::dequeManipulation(char **str)
{
	size_t i;
	
	i = 1;
	std::clock_t start, end; 
	start = std::clock();
	while (str[i])
	{
		number = std::atol(str[i]);
		if (number < 0 )
			throw std::invalid_argument("Error");
		else 
			_deque.push_back(number);
		i++;
	}
	dequeMergeSort(_deque, 0, _deque.size() - 1);
	end = std::clock();
	timeSpendDeque = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void	PmergeMe::vectorMergeSort(std::vector<long> &arr, int left, int right)
{

	if (left < right)  // checking that i'm not in the same vectore index
	{
		if ((right - left) >= length) { // checking that there is more than two numbers between left and right chek  two numbers 
		
			int mid = (left + right) / 2;
			vectorMergeSort(arr, left, mid);
			vectorMergeSort(arr, mid + 1, right);
			vectorSort(arr, mid, left, right);
					
		}
		else {

			VectorInsertionSort(left, right);
		}
	}
}


void	PmergeMe::dequeMergeSort(std::deque<long > &arr, int left, int right)
{
		if (left < right) 
		{
			if ((right - left) > length) {
				
				int mid = (left + right) / 2;
				dequeMergeSort(arr, left, mid);
				dequeMergeSort(arr, mid + 1, right);
				dequeSort(arr, mid, left, right);
			}
			else
				DequeInsertionSort(left, right);
		}
}


void	PmergeMe::vectorSort(std::vector<long > &arr, int mid, int left, int right)
{

	std::vector<long>temp(right - left + 1);
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

void	PmergeMe::dequeSort(std::deque<long > &arr, int mid, int left, int right)
{
	std::deque<long>temp(right - left + 1);
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


void	PmergeMe::VectorInsertionSort(int left, int right)
{
	int i = left;
	int temp;
	while (left < right) {
		i = left;
		while (i < right) {
	
			if (_vector[i] > _vector[right]) {
				temp = _vector[i];
				_vector[i] = _vector[right];
				_vector[right] = temp;
			}
			i++;
		}
		left++;
	}
}

void	PmergeMe::DequeInsertionSort(int left, int right)
{
	
	int i = left;
	int temp;
	while (left < right) {
		i = left;
		while (i < right) {
	
			if (_deque[i] < _deque[left]) {
				
				temp = _deque[i];
				_deque[i] = _deque[left];
				_deque[left] = temp;
			}
			i++;
		}
		left++;
	}
}

int parseAndCheck(char **str)
{
	int i = 1;

	while (str[i])
	{
		char *token = str[i];
		for (int j = 0; token[j] != '\0'; j++)
		{
			if (std::isalpha(token[j]))
				return (0);
		}
		if (token[0] == '-')
			return (0);
		i++;
	}

	return (1);
}