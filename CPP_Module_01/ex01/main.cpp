/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:34:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 09:36:33 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//! Code commented on purpose to uncomment during evaluation and show the

// void leak()
// {
// 	system("leaks Moar_brainz");
// }

int main()
{
	Zombie *Zhord = zombieHorde(10, "zombie");
	for (int i = 0; i < 10; i++)
		Zhord[i].announce();
	delete[](Zhord);
	//atexit(leak);
	return(0);
}

