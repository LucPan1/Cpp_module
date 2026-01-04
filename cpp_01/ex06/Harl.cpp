/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:26:22 by luc               #+#    #+#             */
/*   Updated: 2026/01/05 00:22:41 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor Harl is called" << std::endl;
    return;
}

Harl::~Harl()
{
    std::cout << "Destructor Harl is called" << std::endl;
    return;
}

void	Harl::complain(std::string level, int lvl)
{
    switch(lvl) {
        case 1:
            std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my" 
			<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			<< std::endl;
            lvl++;
        case 2:
            std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon" 
			<< "costs more money." << std::endl
			<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t "
			<< "be asking for more!" << std::endl;
            lvl++;
        case 3:
            std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra" 
			<< "bacon for free." << std::endl << "I’ve been coming for years, whereas you started" 
			<< "working here just last month." << std::endl;
            lvl++;
        case 4:
            std::cout << "[ ERROR ]" << std::endl 
			<< "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
            break;
    }
}