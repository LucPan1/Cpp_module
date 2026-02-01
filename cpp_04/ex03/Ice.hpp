/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:30:24 by luc               #+#    #+#             */
/*   Updated: 2026/02/01 21:08:16 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

#include "AMateria.hpp"

class Ice: public AMateria {

    public:
        Ice();
        Ice(const Ice& other);
        Ice &operator=(const Ice& other);
        ~Ice();
};

#endif