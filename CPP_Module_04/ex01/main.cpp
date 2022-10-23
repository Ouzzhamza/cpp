/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:42:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/23 18:24:09 by houazzan         ###   ########.fr       */
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
	system("leaks World_on_fire");
}*/

void array(void) {
	std::cout << GREEN << "TEST ARRAY" << RESET <<std::endl;

	Animal *animals[NUMBER_ANIMALS];

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		if (i < NUMBER_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < NUMBER_ANIMALS; i++)
		delete (animals[i]);
}

void deep_copie_test(void) {

		std::cout << GREEN << "TEST DEEP COPIE" << RESET << std::endl;

		Cat a;
		Cat b(a);
		Dog c;
		c = d;
}

int main(void) {
//	array();
	deep_copie_test();
	std::cout << std::endl;
//	atexit(leak);
	return 0;
}
