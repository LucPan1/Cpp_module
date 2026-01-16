/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:53:59 by lupan             #+#    #+#             */
/*   Updated: 2026/01/16 15:54:02 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap& other)
{
    *this = other;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
    if (this == &other) {
        return (*this);
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
    return;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Request High five" << std::endl;
}