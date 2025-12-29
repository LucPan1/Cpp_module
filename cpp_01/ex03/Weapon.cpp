/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:04:09 by lupan             #+#    #+#             */
/*   Updated: 2025/12/29 15:39:53 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	this->_type = type;
	std::cout << "Weapon Constructor called" << std::endl;
	return;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor called" << std::endl;
	return;
}

std::string	const &Weapon::getType() const
{
    return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
