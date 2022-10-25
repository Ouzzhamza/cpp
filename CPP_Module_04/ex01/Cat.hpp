/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:01:47 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/24 10:14:44 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class  Cat : public Animal {

	public:
		Cat(); // Default constructor
		Cat(const Cat& animal); // Copy constructor
		Cat (std::string type); // Type constructor
		~Cat(); // Destructor
		Cat& operator=(const Cat& animal); // Assignement operator

		void makeSound() const;
	private:
		Brain *_brain;
};


#endif
