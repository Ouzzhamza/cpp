/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:19:14 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/07 21:38:17 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <time.h>

class Base {
	public :
		virtual ~Base();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
