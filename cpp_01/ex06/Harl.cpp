/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:26:22 by luc               #+#    #+#             */
/*   Updated: 2026/01/05 15:27:09 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    // std::cout << "Constructor Harl is called" << std::endl;
    return;
}

Harl::~Harl()
{
    // std::cout << "Destructor Harl is called" << std::endl;
    return;
}

void	Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my" 
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t "
	<< "be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." 
	<< std::endl << "I’ve been coming for years, whereas you started working here just "
	<< "last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl 
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level)
{
    void (Harl::*ptrToMemberFunc[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
	for (i = 0; i < 4; i++)
	{
		if ((levels[i]) == level)
			break; 
	}
    switch(i) {
        case 0:
            (this->*ptrToMemberFunc[0])();
        case 1:
            (this->*ptrToMemberFunc[1])();
        case 2:
            (this->*ptrToMemberFunc[2])();
        case 3:
            (this->*ptrToMemberFunc[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
