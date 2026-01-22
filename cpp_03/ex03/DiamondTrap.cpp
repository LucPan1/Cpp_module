/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:53:51 by lupan             #+#    #+#             */
/*   Updated: 2026/01/22 17:35:08 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap("scavtrap"), FragTrap("fragtrap")
{
    int hit_point = FragTrap::getHitPoint();
    int energy_point = ScavTrap::getEnergyPoint();
    int attack_damage = FragTrap::getAttackDamage();
    ScavTrap::attack("Dea");
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
    int hit_point = FragTrap::getHitPoint();
    int energy_point = ScavTrap::getEnergyPoint();
    int attack_damage = FragTrap::getAttackDamage();
    std::cout << "DiamondTrap " << name << " Parameterized Constructor called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
    *this = other;
    return;
}

// DiamondTrap &DiamondTrap::operator=(const DiamondTrap& other)
// {
//     ClapTrap::operator=(other);
//     std::cout << "DiamondTrap Copy Assignment Operator called" << std::endl;
//     return (*this);
// }

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
    return;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am" << this->_name << "and my ClapTrap name is " << std::endl;
}
