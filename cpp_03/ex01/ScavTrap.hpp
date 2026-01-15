/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:56:13 by lupan             #+#    #+#             */
/*   Updated: 2026/01/15 15:33:17 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap: public ClapTrap {

    public:
        ScavTrap();
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(const ScavTrap& other);
        ~ScavTrap();

        void	guardGate();
};

#endif