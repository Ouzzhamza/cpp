/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:03:18 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/12 12:00:06 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

#define VAL 10

int main(void) {

    Array<int> numbers(VAL);
    int* mirror = new int[VAL];

    srand(time(NULL));

    for (int i = 0; i < VAL; i++) {
        int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    // testing deep copy
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
/*
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try {
        numbers[-2] = 0;
    } catch(std::exception const& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        numbers[MAX_VAL] = 0;
    } catch(std::exception const& e) {
        std::cerr << e.what() << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }*/

    //delete[] mirror;

    return 0;
}
