/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:50:14 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/06 20:48:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;
  
class Demo
{ 
	public :
		Demo(): b(10){};
		~Demo(){};
	private:
		static int a;
		const int b;

};
  
int main()
{
	Demo demo;

	try{
		int a = 50;
		if (a < 100)
			std::cout << "here" << std::endl;
		else
			throw (404);
	}
	catch (...) {
		std::cout << "Error" << std::endl;
	}

	std::cout << "boo" << std::endl;
    return 0;
}
