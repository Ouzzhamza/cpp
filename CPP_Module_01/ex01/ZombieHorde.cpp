/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:49:17 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/22 17:41:29 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie *zombieHorde(int N, std::string name)
{
	Zombie *hord = new Zombie[N];
	for (int i = 0; i < N; i++)
		hord[i].setName(name);
	return (hord);
}
