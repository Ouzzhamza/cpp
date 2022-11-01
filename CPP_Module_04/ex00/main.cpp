/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:42:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/01 14:18:49 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

/*void leak()
{
	system("leaks Poly");
}*/

int main()
{
	// const Animal* meta = new Animal();
	const WrongAnimal* beta = new WrongAnimal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	k->makeSound();
	// meta->makeSound();
	beta->makeSound();
	// delete(meta);
	// delete(beta);
	// delete(j);
	// delete(i);
	// delete(k);
//	atexit(leak);
	return 0;
}
