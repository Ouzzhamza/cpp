/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:53:41 by houazzan          #+#    #+#             */
/*   Updated: 2022/11/07 18:46:45 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	cout<<rand()%3<<endl;            //choose random numbers from 0 to 99
	std::cout << time(NULL) <<std::endl;

}
