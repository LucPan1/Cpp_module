/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:30:20 by luc               #+#    #+#             */
/*   Updated: 2026/02/02 18:56:18 by luc              ###   ########.fr       */
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

        AMateria* clone() const;
};

#endif