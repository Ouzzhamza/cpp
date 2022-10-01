/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:42:54 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 18:22:48 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

/*void leak()
{
	system("leaks Poly2");
}*/

int main()
{	
	const Animal *meta[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}

	for(int i = 0; i < 4; i++)
	{
		delete(meta[i]);
	}
//	atexit(leak);
	return 0;
}
