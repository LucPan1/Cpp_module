/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:10:20 by luc               #+#    #+#             */
/*   Updated: 2026/02/01 17:26:56 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Default Constructor called" << std::endl;
    return;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria Parameterized Constructor called" << std::endl;
    return;
}

AMateria::AMateria(const AMateria& other)
{
    std::cout << "AMateria Copy Constructor called" << std::endl;
    *this = other;
    return;
}

AMateria &AMateria::operator=(const AMateria& other)
{
    if (this != &other) {
        return (*this);
    }
    std::cout << "AMateria Copy Assignment Operator called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
    return;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

AMateria* clone()
{
    return;
}

void use(ICharacter& target)
{

}