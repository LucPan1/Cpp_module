/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:55:55 by lupan             #+#    #+#             */
/*   Updated: 2026/01/22 13:39:13 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("scavtrap")
{
    _hit_point = ClapTrap::getHitPoint();
    _energy_point = ClapTrap::getEnergyPoint();
    _attack_damage = ClapTrap::getAttackDamage();
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    _hit_point = ClapTrap::getHitPoint();
    _energy_point = ClapTrap::getEnergyPoint();
    _attack_damage = ClapTrap::getAttackDamage();
    std::cout << "ScavTrap " << name << " Parameterized Constructor called" << std::endl;
    return;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = other;
    return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
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
