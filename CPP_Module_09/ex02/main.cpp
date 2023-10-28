/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzzhamza <ouzzhamza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:14:14 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/10/27 15:55:01 by ouzzhamza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char** av) 
{
    try
    {
        if (ac == 1 || !parseAndCheck(av))
            throw std::invalid_argument ("Error");
        else
            PmergeMe _PmergeMe(av);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}