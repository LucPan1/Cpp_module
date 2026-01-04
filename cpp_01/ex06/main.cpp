/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:26:50 by luc               #+#    #+#             */
/*   Updated: 2026/01/05 00:24:46 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl comment;
        int i = 1;
        std::string level;
    
        void (Harl::*ptrToMemberFunc[])(std::string, int) = {&Harl::complain};
        (comment.*ptrToMemberFunc[i])(av[1], i);
    }
    return (0);
}