/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:07:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/04 10:21:28 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Weapon.hpp"

class HumanA{

		std::string name;
		Weapon &weapon;
	public:
		void attack();
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
};

#endif
