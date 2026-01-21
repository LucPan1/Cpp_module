/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:54:02 by lupan             #+#    #+#             */
/*   Updated: 2026/01/22 00:49:00 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap &operator=(const ClapTrap& other);
        virtual ~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

        std::string getName() const;
        unsigned int getHitPoint() const;
        unsigned int getEnergyPoint() const;
        unsigned int getAttackDamage() const;

    protected:
        std::string		_name;
        unsigned int	_hit_point;
		unsigned int	_energy_point;
		unsigned int	_attack_damage;
};

#endif