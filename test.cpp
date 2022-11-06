/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:53:41 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/05 21:29:43 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

#include <iostream>
#include <string>

int main ()
{
	int a = 10;
	int b = 10;
	int *ptr1 = &a;
	int *ptr2 = &b;
       if (ptr1 == ptr2)
	       std::cout << "hello" << std::endl;
	return 0;
}

