/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzhamza <ouzhamza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:16:03 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/04/14 02:45:40 by ouzhamza         ###   ########.fr       */
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

class PmergeMe
{
private:
    std::vector<int>_vector;
    std::deque<int>_deque;
    int number;
    
public:

    PmergeMe();
    PmergeMe(char **str);
    ~PmergeMe();

    void vector_sort();
    void deque_sort();
};

#endif