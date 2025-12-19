/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:39:33 by lupan             #+#    #+#             */
/*   Updated: 2025/12/19 16:44:10 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
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

void	announce()
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

