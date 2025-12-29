/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:04:13 by lupan             #+#    #+#             */
/*   Updated: 2025/12/29 15:18:07 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
    
    public:
        Weapon(std::string type);
        ~Weapon();

        std::string	const   &getType() const;
        void                setType(std::string type);

    private:
        std::string _type;
        
};

#endif
