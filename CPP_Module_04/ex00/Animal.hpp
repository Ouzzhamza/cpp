/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:01:47 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/30 16:17:02 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	protected:
		std::string type;
	
	public:
		Animal(); // Default constructor
		Animal(const Animal& animal); // Copy constructor
		Animal(std::string type); // Type constructor
		virtual ~Animal(); // Destructor
		Animal& operator=(const Animal& animal); // Assignement operator
		
		const std::string& getType() const;
		virtual void makeSound() const;
};


#endif
