/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:49:17 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/18 16:30:21 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name);

#endif
