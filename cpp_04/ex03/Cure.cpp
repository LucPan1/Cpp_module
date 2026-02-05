/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:30:16 by luc               #+#    #+#             */
/*   Updated: 2026/02/06 00:36:50 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure Default Constructor called" << std::endl;
    return;
}

Cure::Cure(const Cure& other): AMateria(other)
{
    std::cout << "Cure Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Cure &Cure::operator=(const Cure& other)
{
    if (this != &other) {
        return (*this);
    }
    std::cout << "Cure Copy Assignment Operator called" << std::endl;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
    return;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}
