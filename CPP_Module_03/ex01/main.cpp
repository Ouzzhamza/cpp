/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:36:12 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 18:35:31 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"
	
int main()
{
	std::cout << GREEN "\t" << "CLAPTRAP CLASS" << RESET << std::endl;
	ClapTrap nigan("nigan");
	ClapTrap rick("rick");
	nigan.setter("damage", 5);
	nigan.attack("rick");
	rick.takeDamage(nigan.getter("damage"));
	std::cout << rick.getter("hit") << std::endl;
	rick.beRepaired(2);
	std::cout << rick.getter("hit") << std::endl;
	
	std::cout << GREEN "\t" <<"SCAVTRAP CLASS"  << RESET <<std::endl;
	 ScavTrap marco("marco");
     ScavTrap polo("polo");
     marco.setter("damage", 5);
     marco.attack("polo");
     polo.takeDamage(marco.getter("damage"));
     std::cout << polo.getter("hit") << std::endl;
     polo.beRepaired(2);
     std::cout << polo.getter("hit") << std::endl;

	return (0);
}
