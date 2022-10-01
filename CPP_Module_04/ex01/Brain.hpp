/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:11:03 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 17:23:54 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#define _MAX 100

#include <iostream>

class Brain {

	protected:
		std::string ideas[_MAX];
	public:
		Brain(); // Default construct 
		Brain(const Brain& brain); // Copie construct
		~Brain(); // Destruct

		Brain& operator=(const Brain& brain); // Overloading operatur
};


#endif 
