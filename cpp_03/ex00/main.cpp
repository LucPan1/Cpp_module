/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:53:34 by lupan             #+#    #+#             */
/*   Updated: 2026/01/21 20:32:22 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("claptrap");

    std::cout << "Name: " << claptrap.getName() << std::endl
              << "Hit point: " << claptrap.getHitPoint() << std::endl
              << "Energy point: " << claptrap.getEnergyPoint() << std::endl
              << "Attack damage: " << claptrap.getAttackDamage() << std::endl;

    claptrap.attack("john");

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
    return (0);
}