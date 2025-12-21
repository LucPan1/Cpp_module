/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:39:33 by lupan             #+#    #+#             */
/*   Updated: 2025/12/21 23:55:16 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie constructor called" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor called" << std::endl;
	return;
}

std::string Zombie::getZombie()
{
	return this->_name;
}

void	Zombie::announce()
{
	std::cout << getZombie() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

