/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouzzhamza <ouzzhamza@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:26:29 by ouzhamza          #+#    #+#             */
/*   Updated: 2023/10/27 07:09:19 by ouzzhamza        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

class Rpn
{
    private:
        std::stack<int>_stack;
    public: 
        Rpn();
        ~Rpn();

        void    calculate(std::string str);
        void    multiplication();
        void    addition();
        void    subtraction();
        void    division();
        void    convertToString();
};

#endif