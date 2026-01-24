/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:53:51 by lupan             #+#    #+#             */
/*   Updated: 2026/01/24 01:05:04 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), _name("default")
{
    this->_hit_point = FragTrap::getHitPoint();
    this->_energy_point = ScavTrap::getEnergyPoint();
    this->_attack_damage = FragTrap_attackDamage;
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
    this->_hit_point = FragTrap::getHitPoint();
    this->_energy_point = ScavTrap::getEnergyPoint();
    this->_attack_damage = FragTrap_attackDamage;
    std::cout << "DiamondTrap " << name << " Parameterized Constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
    *this = other;
    return;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other) {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    std::cout << "DiamondTrap Copy Assignment Operator called" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
    return;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
    FragTrap::attack(target);
}

