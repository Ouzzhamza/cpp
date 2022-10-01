/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:01:47 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/01 11:38:39 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal {

	public:
		WrongCat(); // Default constructor
		WrongCat(const WrongCat& animal); // Copy constructor
		WrongCat (std::string type); // Type constructor
		~WrongCat(); // Destructor
		WrongCat& operator=(const WrongCat& animal); // Assignement operator

		void makeSound() const;
};


#endif
