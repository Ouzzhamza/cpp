/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:25:22 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/07 10:17:37 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

	protected:

	std::string name;
	unsigned int hit;
	unsigned int energy;
	unsigned int damage;

	public:
		
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &clap);
		~ClapTrap();
		
		int getter(std::string type) const;
		void setter (std::string type, int n);
		void setname(const std::string& name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


		ClapTrap& operator= (const ClapTrap& claptrap);

};	

#endif
