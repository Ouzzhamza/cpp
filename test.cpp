/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:53:41 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/12 09:40:36 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <float.h>

using namespace std;
class base {
	public :
		int i;
		virtual ~base()
		{
		}
};

class derived : public base {
	//~derived();
};

int main()
{
	/*base *Base = new base;
	derived *der = new derived;
	base *B = new base;
	Base->i = 10;
	der  = dynamic_cast< *>(Base);*/
	int i = new int[10];
	std::cout << "here " << i << std::endl;
//	double *b;

//	b = reinterpret_cast<double *>(i);
	//std::cout << B->i << std::endl;
}
