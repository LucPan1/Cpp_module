/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:53:59 by lupan             #+#    #+#             */
/*   Updated: 2026/01/24 00:37:21 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("FragTrap")
{
    _hit_point = 100;
    _energy_point = 100;
    _attack_damage = 30;
    std::cout << "FragTrap Default Constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _hit_point = 100;
    _energy_point = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << name << " Parameterized Constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = other;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
    return;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " request a High Five" << std::endl;
}
