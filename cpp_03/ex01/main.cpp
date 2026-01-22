/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:54:04 by lupan             #+#    #+#             */
/*   Updated: 2026/01/22 13:35:18 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("david");
    ScavTrap scavtrap("pierre");

    claptrap.attack("harry");
    std::cout << "Name: " << claptrap.getName() << std::endl
              << "Hit point: " << claptrap.getHitPoint() << std::endl
              << "Energy point: " << claptrap.getEnergyPoint() << std::endl
              << "Attack damage: " << claptrap.getAttackDamage() << std::endl;

    claptrap.takeDamage(9);
    std::cout << "Name: " << claptrap.getName() << std::endl
              << "Hit point: " << claptrap.getHitPoint() << std::endl
              << "Attack damage: " << claptrap.getAttackDamage() << std::endl;

    claptrap.beRepaired(20);
     std::cout << "Name: " << claptrap.getName() << std::endl
               << "Hit point: " << claptrap.getHitPoint() << std::endl;

    scavtrap.attack("john");

    std::cout << "Name: " << scavtrap.getName() << std::endl
              << "Hit point: " << scavtrap.getHitPoint() << std::endl
              << "Energy point: " << scavtrap.getEnergyPoint() << std::endl
              << "Attack damage: " << scavtrap.getAttackDamage() << std::endl;

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