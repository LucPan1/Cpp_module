/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:53:37 by lupan             #+#    #+#             */
/*   Updated: 2026/01/16 15:53:40 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(), _hit_point(100), _energy_point(100), _attack_damage(30)
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
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

void    ClapTrap::attack(const std::string& target)
{
    this->_energy_point--;
    std::cout << "ClapTrap " << this->_name << "attacks " << target
              << ", causing " << this->_attack_damage << " points of damage!"
              << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit_point -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_energy_point--;
    this->_hit_point += amount;
}
