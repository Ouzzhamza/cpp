/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:41:25 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/07 23:50:37 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int i;
	std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif
