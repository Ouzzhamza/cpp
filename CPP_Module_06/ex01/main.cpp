/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:41:43 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/07 16:18:43 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	uintptr_t raw; 
	Data data;
	Data *data1;
	data.i = 100;
	data.str = "hello world";
	raw = serialize(&data);
	data1 = deserialize(raw);
	std::cout << "data1 integer value is: " << data1->i << std::endl;
	std::cout << "data1 string value is: " << data1->str << std::endl;
}
