/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:54:17 by lupan             #+#    #+#             */
/*   Updated: 2026/01/22 17:15:38 by lupan            ###   ########.fr       */
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
    ClapTrap claptrap("david");

    claptrap.attack("harry");
    claptrap.takeDamage(9);
    display_infos(claptrap.getName(), claptrap.getHitPoint(), claptrap.getEnergyPoint(), claptrap.getAttackDamage());
    claptrap.beRepaired(20);
    std::cout << "Hit point: " << claptrap.getHitPoint() << std::endl;

    ScavTrap scavtrap("pierre");
    scavtrap.attack("john");
    scavtrap.takeDamage(9);
    display_infos(scavtrap.getName(), scavtrap.getHitPoint(), scavtrap.getEnergyPoint(), scavtrap.getAttackDamage());
    scavtrap.beRepaired(20);
    std::cout << "Hit point: " << scavtrap.getHitPoint() << std::endl;
    scavtrap.guardGate();

    FragTrap fragtrap("jean");
    fragtrap.attack("harry");
    fragtrap.takeDamage(10);
    display_infos(fragtrap.getName(), fragtrap.getHitPoint(), fragtrap.getEnergyPoint(), fragtrap.getAttackDamage());
    fragtrap.beRepaired(20);
    std::cout << "Hit point: " << fragtrap.getHitPoint() << std::endl;
    fragtrap.highFivesGuys();
    return (0);
}