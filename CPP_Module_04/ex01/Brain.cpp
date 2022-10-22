/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:36:40 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/22 17:46:49 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain construct" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain destruct called" << std::endl;
}

Brain& Brain::operator= (const Brain& brain)
{
	std::cout << "Brain" << std::endl;
	for(int i = 0; i < _MAX; i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
		return(*this);
}
