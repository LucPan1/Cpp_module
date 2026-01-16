/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:54:17 by lupan             #+#    #+#             */
/*   Updated: 2026/01/16 15:54:18 by lupan            ###   ########.fr       */
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