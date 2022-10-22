/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:11:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 09:36:38 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


//! Code commented on purpose to uncomment during evaluation and show the

// void leak()
// {
// 	system("leaks BraiiiiiiinnnzzzZ");
// }

int main()
{
	Zombie *Z1 = newZombie("Zombie1");
	Z1->announce();
	randomChump("Zombie2");
	delete Z1;
	//atexit(leak);
	return(0);
}
