/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:42:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/23 16:15:23 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>
#include    <cctype>

using namespace std;

int main(int ac, char **av)
{
    int i = 1;
    int j;
    
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    else
    {
        while (i < ac)
        {
            j = -1;
            while (av[i][++j])
                std::cout << static_cast<char> (toupper (av[i][j])) ;
            i++;
            std::cout << std::endl;
        }
    }
}