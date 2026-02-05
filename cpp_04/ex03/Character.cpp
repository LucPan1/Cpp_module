/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:17:31 by luc               #+#    #+#             */
/*   Updated: 2026/02/05 17:22:23 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("pal")
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        std::cout << _inventory[i] << std::endl;
    std::cout << "Character Default Constructor called" << std::endl;
    return;
}

Character::Character(std::string const &type): _name(type)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    for (int i = 0; i < 4; i++)
        std::cout << _inventory[i] << std::endl;
    std::cout << "Character Parameterized Constructor called" << std::endl;
    return;
}

Character::Character(const Character& other)
{
    std::cout << "Character Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Character &Character::operator=(const Character& other)
{
    if (this != &other) {
        _name = other._name;
    }
    std::cout << "Character Copy Assignment Operator called" << std::endl;
    return (*this);
}

Character::~Character()
{
    std::cout << "Character Destructor called" << std::endl;
    return;
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void ICharacter::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        // Character::_inventory[i] = m;
    }
}
