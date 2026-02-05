/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:10:20 by luc               #+#    #+#             */
/*   Updated: 2026/02/05 16:43:35 by lupan            ###   ########.fr       */
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
        _type = other._type;
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

void use(ICharacter& target)
{
    std::cout << "Ice: " << "\"* shoots an ice bolt at *\"" << &target << std::endl;
    std::cout << "Cure: " << "\"* heals " << &target << "*\"" << std::endl;

}

// std::ostream &operator<<(std::ostream &out, const ICharacter &fixed)
// {
//     out << fixed;
//     return out;
// }
