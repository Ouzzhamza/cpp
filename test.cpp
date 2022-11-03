/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:53:41 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/03 19:37:46 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
int main() {
	long double a = .0;
	std::stringstream("235000.54") >> a;
	//os << "2147483648\n";
	std::cout << std::setprecision(2) << a;	
}

