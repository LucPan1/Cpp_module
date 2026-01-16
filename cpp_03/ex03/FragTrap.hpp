/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:54:09 by lupan             #+#    #+#             */
/*   Updated: 2026/01/16 15:54:11 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap {

    public:
        FragTrap();
        FragTrap(const FragTrap& other);
        FragTrap &operator=(const FragTrap& other);
        ~FragTrap();
        
        void highFivesGuys(void);
};

#endif