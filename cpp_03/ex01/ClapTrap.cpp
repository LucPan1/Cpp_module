/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:53:59 by lupan             #+#    #+#             */
/*   Updated: 2026/01/23 12:40:01 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(), _hit_point(10), _energy_point(10), _attack_damage(0)
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
    std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = other;
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other) {
        _name = other._name;
        _attack_damage = other._attack_damage;
        _energy_point = other._energy_point;
        _hit_point = other._hit_point;
    }
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_energy_point == 0 || this->_hit_point == 0)
    {
        std::cout << "No energy point or hit point left" << std::endl;
        return;
    }
    this->_energy_point--;
    std::cout << "ClapTrap " << this->_name 
              << " attacks " << target
              << ", causing " << this->_attack_damage << " points of damage!"
              << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_point == 0)
    {
        std::cout << "No hit point left" << std::endl;
        return;
    }
    if (amount > this->_hit_point)
    {
        this->_hit_point -= this->_hit_point;
    }
    else
        this->_hit_point -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_point == 0 || this->_hit_point == 0)
    {
        std::cout << "No energy point or hit point left" << std::endl;
        return;
    }
    this->_energy_point--;
    this->_hit_point += amount;
}

std::string ClapTrap::getName() const {
    return this->_name;
}

unsigned int ClapTrap::getHitPoint() const {
    return this->_hit_point;
}

unsigned int ClapTrap::getEnergyPoint() const {
    return this->_energy_point;
}

unsigned int ClapTrap::getAttackDamage() const {
    return this->_attack_damage;
}