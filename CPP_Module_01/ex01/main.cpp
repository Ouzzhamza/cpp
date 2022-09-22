/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:34:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/22 17:45:53 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zhord = zombieHorde(10, "zombie");
	for (int i = 0; i < 10; i++)
		Zhord[i].announce();
	delete[](Zhord);
	
	return(0);
}

