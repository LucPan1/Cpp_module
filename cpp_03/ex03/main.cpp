/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:54:17 by lupan             #+#    #+#             */
/*   Updated: 2026/01/23 00:24:57 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void    display_infos(const std::string &name, int hit_point, int energy_point, int attack_damage)
{
    std::cout << "Name: " << name << std::endl
              << "Hit point: " << hit_point << std::endl
              << "Energy point: " << energy_point << std::endl
              << "Attack damage: " << attack_damage << std::endl;
}

int main()
{
    DiamondTrap diamondtrap("david");

    // diamondtrap.attack("harry");
    // diamondtrap.takeDamage(9);
    // display_infos(diamondtrap.getName(), diamondtrap.getHitPoint(), diamondtrap.getEnergyPoint(), diamondtrap.getAttackDamage());
    // diamondtrap.beRepaired(20);
    // std::cout << "Hit point: " << diamondtrap.getHitPoint() << std::endl;
    return (0);
}