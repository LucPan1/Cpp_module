/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:04:09 by lupan             #+#    #+#             */
/*   Updated: 2025/12/23 16:13:22 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon Contructor called" << std::endl;
	return;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor called" << std::endl;
	return;
}

std::string	Weapon::getType()
{
    return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}