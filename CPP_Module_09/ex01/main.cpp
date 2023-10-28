/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzzhamza <ouzzhamza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:25:41 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/10/27 09:06:49 by ouzzhamza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char **av)
{
    try
    {
        if (ac != 2) {
            throw std::invalid_argument("Error");
        }
        else
        {
            Rpn Reverse;
            Reverse.calculate(av[1]);
        }

    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}