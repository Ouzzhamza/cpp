/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:01:47 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/30 16:00:39 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class  Cat : public Animal {

	public:
		Cat(); // Default constructor
		Cat(const Cat& animal); // Copy constructor
		Cat (std::string type); // Type constructor
		~Cat(); // Destructor
		Cat& operator=(const Cat& animal); // Assignement operator

		void makeSound() const;
};


#endif
