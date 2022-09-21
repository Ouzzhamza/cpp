/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:49:52 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/21 20:58:21 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>


class Harl
{
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		static	void complain(std::string level);
	Harl();
	~Harl();
};


#endif
