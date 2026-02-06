/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:30:20 by luc               #+#    #+#             */
/*   Updated: 2026/02/06 23:01:22 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {

    public:
        Cure();
        Cure(const Cure& other);
        Cure &operator=(const Cure& other);
        ~Cure();

		void		use(ICharacter& target);
        AMateria*	clone() const;
};

#endif