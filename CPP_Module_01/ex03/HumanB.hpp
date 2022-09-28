/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:26:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/28 11:34:52 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB{

		std::string name;
		Weapon *weapon;
	public:
		void attack();
		void setWeapon(Weapon &_weapon);
		HumanB(std::string);
		~HumanB();
};




#endif
