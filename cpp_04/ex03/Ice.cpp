/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:30:22 by luc               #+#    #+#             */
/*   Updated: 2026/02/06 23:43:22 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    // std::cout << "Ice Default Constructor called" << std::endl;
    return;
}

Ice::Ice(const Ice& other): AMateria(other)
{
    // std::cout << "Ice Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Ice &Ice::operator=(const Ice& other)
{
    if (this != &other)
        _type = other._type;
    // std::cout << "Ice Copy Assignment Operator called" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    // std::cout << "Ice Destructor called" << std::endl;
    return;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

