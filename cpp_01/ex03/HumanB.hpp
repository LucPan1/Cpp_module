/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:04:00 by lupan             #+#    #+#             */
/*   Updated: 2025/12/29 15:39:18 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
    
    public:
        HumanB(std::string name);
        ~HumanB();

		void	attack();
		void	setWeapon(Weapon &type);
    
    private:
        std::string	_name;
        Weapon      *_weapon;
        
};

#endif