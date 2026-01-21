/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:55:55 by lupan             #+#    #+#             */
/*   Updated: 2026/01/22 00:28:32 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    *this = other;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other) {
        _name = other._name;
        _attack_damage = other._attack_damage;
        _energy_point = other._energy_point;
        _hit_point = other._hit_point;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
    return;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
