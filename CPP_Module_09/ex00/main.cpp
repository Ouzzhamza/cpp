/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzzhamza <ouzzhamza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 23:16:25 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/10/25 05:15:23 by ouzzhamza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av) {

    try {
        if (ac != 2)
            throw std::invalid_argument("Error: could not open file.");
        else
            BitcoinExchange _bitcoinexchange(av[1]);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}