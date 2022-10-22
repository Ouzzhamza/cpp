/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:42:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/10/02 21:16:06 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < ac)
        {
            j = -1;
            while (av[i][++j])
                std::cout << (char) (toupper (av[i][j])) ;
            i++;
        }
         std::cout << std::endl;
    }
}
