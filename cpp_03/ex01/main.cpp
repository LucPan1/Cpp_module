/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:54:04 by lupan             #+#    #+#             */
/*   Updated: 2026/01/22 14:02:09 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void    display_infos(const std::string &name, int hit_point, int energy_point, int attack_damage)
{
    std::cout << "Name: " << name << std::endl
              << "Hit point: " << hit_point << std::endl
              << "Energy point: " << energy_point << std::endl
              << "Attack damage: " << attack_damage << std::endl;
}

int main()
{
    ClapTrap claptrap("david");
    ScavTrap scavtrap("pierre");

    claptrap.attack("harry");
    display_infos(claptrap.getName(), claptrap.getHitPoint(), claptrap.getEnergyPoint(), claptrap.getAttackDamage());

    claptrap.takeDamage(9);
    std::cout << "Name: " << claptrap.getName() << std::endl
              << "Hit point: " << claptrap.getHitPoint() << std::endl
              << "Attack damage: " << scavtrap.getAttackDamage() << std::endl;

    claptrap.beRepaired(20);
     std::cout << "Name: " << claptrap.getName() << std::endl
               << "Hit point: " << claptrap.getHitPoint() << std::endl;

    scavtrap.attack("john");

    display_infos(scavtrap.getName(), scavtrap.getHitPoint(), scavtrap.getEnergyPoint(), scavtrap.getAttackDamage());

    scavtrap.takeDamage(9);
    std::cout << "Name: " << scavtrap.getName() << std::endl
              << "Hit point: " << scavtrap.getHitPoint() << std::endl
              << "Attack damage: " << scavtrap.getAttackDamage() << std::endl;

    scavtrap.beRepaired(20);
     std::cout << "Name: " << scavtrap.getName() << std::endl
               << "Hit point: " << scavtrap.getHitPoint() << std::endl;

    scavtrap.guardGate();
    return (0);
}