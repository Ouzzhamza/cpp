/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:42:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 20:01:40 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define NUMBER_ANIMALS 4

// Code commented on purpose to uncomment during evaluation and show the
// compilation errors linked to the instantiation of an abstract class

/*void leak()
{
	system("leaks Poly2");
}*/

static void array(void) {
	std::cout << GREEN << "TEST ARRAY" << RESET <<std::endl;

	Animal const* animals[NUMBER_ANIMALS];

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		if (i % 2 == 0) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		delete animals[i];
	}
}

int main(void) {
	array();
	std::cout << std::endl;
//	atexit(leak);
	return 0;
}
