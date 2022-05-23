/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:42:26 by houazzan          #+#    #+#             */
/*   Updated: 2022/05/23 09:43:17 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>

using namespace std;

int main(int ac, char **av)
{
    int i = 1;
   string text;
    
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    else
    {
        while (i < ac)
        {
            text = av[i];
            transform (text.begin(), text.end(), text.begin(), ::toupper);
            cout << text << ' '<< flush;
            i++;
        }
        cout << "\n";
    }
}