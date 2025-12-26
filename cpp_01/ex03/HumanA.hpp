/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:03:54 by lupan             #+#    #+#             */
/*   Updated: 2025/12/26 16:15:34 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
    
    public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();

		void	attack();

	private:
		std::string	_name;
        Weapon      _weapon;
};

#endif
