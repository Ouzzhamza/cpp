/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:51:40 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/17 18:11:28 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void randomChump(std::string name)
{
	Zombie  n_zombie(name);
	//foo.name = name
	n_zombie.announce();
}
