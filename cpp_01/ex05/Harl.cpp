/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:14:16 by luc               #+#    #+#             */
/*   Updated: 2026/01/04 22:42:32 by luc              ###   ########.fr       */
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
    std::cout << "I love having extra bacon for my" 
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t"
	<< "be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free."
	<< "I’ve been coming for years, whereas you started working here just"
	<< "last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void	Harl::complain(std::string level) {

    void (Harl::*ptrToMemberFunc[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if ((levels[i]) == level)
		{
			(this->*ptrToMemberFunc[i])(); 
		}
	}
}