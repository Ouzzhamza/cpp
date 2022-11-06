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
  std::string str ("10.01");
  int i = str.find(".");
  int j = str.length();
  std::cout << i << '\n';
  std::cout << j << '\n';
  return 0;
}

