/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:53:31 by lupan             #+#    #+#             */
/*   Updated: 2026/01/14 23:23:39 by luc              ###   ########.fr       */
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
        ~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

    private:
        std::string	_name;
        int			_hit_point;
		int			_energy_point;
		int			_attack_damage;
};

#endif