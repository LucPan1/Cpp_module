/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:19:40 by lupan             #+#    #+#             */
/*   Updated: 2025/12/23 13:16:30 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _name()
{
    std::cout << "Zombie Constructor called" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "Zombie Destructor called" << std::endl;
    return;
}

void	Zombie::announce()
{
    std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}
