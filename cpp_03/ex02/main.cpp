/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:32:40 by lupan             #+#    #+#             */
/*   Updated: 2026/01/16 15:49:35 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag;

    frag.takeDamage(100);
    frag.attack("clap");
    frag.beRepaired(20);
    frag.highFivesGuys();
    return (0);
}