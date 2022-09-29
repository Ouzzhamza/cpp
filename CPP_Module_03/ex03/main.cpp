/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:36:12 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/29 19:03:51 by houazzan         ###   ########.fr       */
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
	
	std::cout << GREEN "\t" << "DIAMOND CLASS" << RESET << std::endl;

	DiamondTrap Boot1("Boot1");
	DiamondTrap Boot2("Boot2");
	Boot1.setter("damage", 5);
	Boot2.attack("Ramses");
	Boot2.takeDamage(Boot1.getter("damage"));
	std::cout << Boot2.getter("hit") << std::endl;
	Boot2.beRepaired(2);
	std::cout << Boot2.getter("hit") << std::endl;
	Boot1.whoAmI();
	Boot1.attack("");
	
	return (0);
}
