/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:54:04 by lupan             #+#    #+#             */
/*   Updated: 2026/01/16 15:49:42 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap;

    scavtrap.takeDamage(10);
    scavtrap.attack("scav");
    scavtrap.beRepaired(20);
    scavtrap.guardGate();
    return (0);
}