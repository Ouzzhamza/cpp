/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:36:12 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 22:19:00 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ScavTrap.hpp"
#include	"FragTrap.hpp"
#include	"DiamondTrap.hpp"
	
int main()
{
/*	std::cout << GREEN "\t" << "CLAPTRAP CLASS" << RESET << std::endl;

	ClapTrap Nigan("Nigan");
	ClapTrap Rick("Rick");
	Nigan.setter("damage", 5);
	Nigan.attack("Rick");
	Rick.takeDamage(Nigan.getter("damage"));
	std::cout << Rick.getter("hit") << std::endl;
	Rick.beRepaired(2);
	std::cout << Rick.getter("hit") << std::endl;
	
	std::cout << GREEN "\t" <<"SCAVTRAP CLASS"  << RESET << std::endl;
 
	ScavTrap Marco("Marco");
    ScavTrap Polo("Polo");
    Marco.setter("damage", 5);
    Marco.attack("Polo");
    Polo.takeDamage(Marco.getter("damage"));
    std::cout << Polo.getter("hit") << std::endl;
    Polo.beRepaired(2);
    std::cout << Polo.getter("hit") << std::endl;
	Marco.guardGate();

	std::cout << GREEN "\t" << "FRAGTRAP CLASS" << RESET << std::endl;
	
	FragTrap Alexander("Alexander");
	FragTrap Ramses("Ramses");
	Alexander.setter("damage", 5);
	Alexander.attack("Ramses");
	Ramses.takeDamage(Alexander.getter("damage"));
	std::cout << Ramses.getter("hit") << std::endl;
	Ramses.beRepaired(2);
	std::cout << Ramses.getter("hit") << std::endl;	
	Alexander.highFivesGuys();*/
	
	DiamondTrap me("me");
	std::cout << GREEN "\t" << "DIAMOND CLASS" << RESET << std::endl;
	me.whoAmI();
	
	return (0);
}
