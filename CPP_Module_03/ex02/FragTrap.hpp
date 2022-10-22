/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:08:05 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 11:52:43 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP
#define FragTRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


class FragTrap : public ClapTrap
{
	public:

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/
		//DEFAULT
		FragTrap();

		//TYPE CONSTRUCTOR
		FragTrap(std::string name);

		//COPY CONSTRUCTOR
		FragTrap(const FragTrap& Fragtrap);

		//DESTRUCTOR
		~FragTrap();

/******************************************************************************/
/*                   	    MUMBER FUNCTIONS                                  */
/******************************************************************************/
		//ASSIGNEMENT OPERATOR
		FragTrap &operator= (const FragTrap& obj);

		void highFivesGuys(void);
};

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */

#endif
