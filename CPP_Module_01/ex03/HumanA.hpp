/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:07:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/19 21:38:33 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Weapon.hpp"

class HumanA{

	std::string name;
	Weapon weapon;
	public:
	HumanA(std::string name, weapon);
	~HumanA();

	
};

#endif
