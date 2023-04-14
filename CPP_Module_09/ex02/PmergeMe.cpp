/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:15:56 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/14 02:45:46 by ouzhamza         ###   ########.fr       */
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
        if (number < 0)
            throw std::invalid_argument("Error");
        else {
            _vector.push_back(number);
            _deque.push_back(number);
        }
        i++;
    }
    vector_sort();
    deque_sort();
}


void    PmergeMe::vector_sort()
{
    
}