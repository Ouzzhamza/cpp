/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:01:47 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 11:37:02 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	protected:
		std::string type;
	
	public:
		WrongAnimal(); // Default constructor
		WrongAnimal(const WrongAnimal& animal); // Copy constructor
		WrongAnimal(std::string type); // Type constructor
		virtual ~WrongAnimal(); // Destructor
		WrongAnimal& operator=(const WrongAnimal& animal); // Assignement operator
		
		const std::string& getType() const;
		void makeSound() const;
};


#endif
