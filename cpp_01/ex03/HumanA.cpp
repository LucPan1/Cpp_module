/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:03:51 by lupan             #+#    #+#             */
/*   Updated: 2025/12/26 16:49:18 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon): _name(), _weapon(weapon)
{
	this->_name = name;
	std::cout << "Human A constructor called" << std::endl;
	return;
}

HumanA::~HumanA()
{
	std::cout << "Human A constructor called" << std::endl;
	return;
}

void	HumanA::attack()
{
	Weapon *Weapon;

	std::cout << this->_name << "attacks with their " << Weapon;
}
