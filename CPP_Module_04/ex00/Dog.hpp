/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:01:47 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 11:24:28 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(); // Default constructor
		Dog(const Dog& animal); // Copy constructor
		Dog(std::string type); // Type constructor
		~Dog(); // Destructor
		Dog& operator=(const Dog& animal); // Assignement operator

		void makeSound() const;
};


#endif
