/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:55:36 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 09:26:18 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	std::string name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void announce (void);
};

Zombie* newZombie( std::string name);
void randomChump(std::string name);
 
#endif 
