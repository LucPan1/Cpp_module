/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:03:57 by lupan             #+#    #+#             */
/*   Updated: 2025/12/26 16:58:35 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_name = name;
    std::cout << "HumanB Constructor called" << std::endl;
    return;
}

HumanB::~HumanB()
{
    std::cout << "HumanB Destructor called" << std::endl;
    return;
}

void	HumanB::attack() 
{
	Weapon *weapon;

	std::cout << this->_name << "attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon type)
{
	std::string name;

	type.setType(name);
	Weapon &weapon = type;

}