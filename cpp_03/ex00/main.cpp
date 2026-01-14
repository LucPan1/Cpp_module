/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:53:34 by lupan             #+#    #+#             */
/*   Updated: 2026/01/14 23:35:08 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap;

    claptrap.attack("clap");
    claptrap.takeDamage(10);
    claptrap.beRepaired(20);
    return (0);
}