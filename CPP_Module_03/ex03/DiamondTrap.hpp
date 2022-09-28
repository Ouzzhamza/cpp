/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:47:56 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 22:26:18 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include	"FragTrap.hpp"
#include	"ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap

{
	private:

		std::string name;
	
	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/
		//DEFAULT
		DiamondTrap();
		
		//TYPE CONSTRUCT
		DiamondTrap(std::string name);

		//COPY CONSTRUCT
		DiamondTrap(const DiamondTrap& diamondtrap);

		//DESTUCT
		~DiamondTrap();

/******************************************************************************/
/*                        NON-MUMBER FUNCTIONS                                */
/******************************************************************************/

		//ASSIGNEMENT OPERATOR
		DiamondTrap& operator= (const DiamondTrap& obj);

		void whoAmI();
};

#endif
