/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:30:24 by luc               #+#    #+#             */
/*   Updated: 2026/02/06 23:01:15 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {

    public:
        Ice();
        Ice(const Ice& other);
        Ice &operator=(const Ice& other);
        ~Ice();

		void		use(ICharacter& target);
        AMateria*	clone() const;
};

#endif