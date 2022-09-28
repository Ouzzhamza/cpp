/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:36:12 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 10:48:59 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap.hpp"
	
int main()
{
	ClapTrap nigan("nigan");
	ClapTrap rick;
	rick.setname ("rick");
	nigan.setter("damage", 5);
	nigan.attack("rick");
	rick.takeDamage(nigan.getter("damage"));
	std::cout << rick.getter("hit") << std::endl;
	rick.beRepaired(2);
	std::cout << rick.getter("hit") << std::endl;
	return (0);
}
