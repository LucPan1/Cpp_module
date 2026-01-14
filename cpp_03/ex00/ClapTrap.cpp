/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:53:26 by lupan             #+#    #+#             */
/*   Updated: 2026/01/14 16:04:22 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    return;
}

ClapTrap &operator=(const ClapTrap& other)
{
    if (this == &other) {
        return (*this);
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return;
}
