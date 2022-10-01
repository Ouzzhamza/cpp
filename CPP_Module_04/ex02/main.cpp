/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:42:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 19:51:46 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

/*void leak()
{
	system("leaks Abstract");
}*/

#define NUMBER_ANIMALS 6

// Code commented on purpose to uncomment during evaluation and show the
// compilation errors linked to the instantiation of an abstract class

static void test_makeSound(void) {
	std::cout  << GREEN << "TEST MAKE_SOUND WITH ABSTRACT CLASS" << RESET << std::endl;
//	Animal const* meta = new Animal();
	Animal const* i = new Dog();
	Animal const* j = new Cat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
//	meta->makeSound();

//	delete meta;
	delete i;
	delete j;
}

int main(void) {
	test_makeSound();
//	atexit(leak);
	return 0;
}
