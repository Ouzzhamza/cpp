/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:42:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/22 18:43:01 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define NUMBER_ANIMALS 2

// Code commented on purpose to uncomment during evaluation and show the
// compilation errors linked to the instantiation of an abstract class

/*void leak()
{
	system("leaks Wold_on_fire");
}*/

static void array(void) {
	std::cout << GREEN << "TEST ARRAY" << RESET <<std::endl;

	Animal *animals[NUMBER_ANIMALS];
	Animal *animal[NUMBER_ANIMALS];

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		animals[i] = new Dog();
	for (int i = 0; i < NUMBER_ANIMALS; i++) {	
			animal[i] = new Cat();
		}
	}
	animal[0] = animals[1];
//	std::cout << animals[0]->getType() << std::endl;
//	std::cout << animals[1]->getType() << std::endl;
//	std::cout << animals[2]->getType() << std::endl;
//	std::cout << animals[3]->getType() << std::endl;
//		for (int i = 0; i < NUMBER_ANIMALS; i++) {
//			delete animals[i];
//	}
}

int main(void) {
	array();
	std::cout << std::endl;
//	atexit(leak);
	return 0;
}
