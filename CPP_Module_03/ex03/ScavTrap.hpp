/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:11:13 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/29 15:49:18 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	public:

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/
		//DEFAULT
		ScavTrap();

		//TYPE CONSTRUCTOR
		ScavTrap(std::string name);

		//COPY CONSTRUCTOR
		ScavTrap(const ScavTrap& scavtrap);

		//DESTRUCTOR
		~ScavTrap();

/******************************************************************************/
/*                   	    MUMBER FUNCTIONS                                  */
/******************************************************************************/
		//ASSIGNEMENT OPERATOR
		ScavTrap &operator= (const ScavTrap& obj);
		
		void guardGate();
		void attack(const std::string& target);
};

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */

#endif
