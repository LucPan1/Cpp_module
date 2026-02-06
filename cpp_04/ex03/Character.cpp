/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:17:31 by luc               #+#    #+#             */
/*   Updated: 2026/02/06 23:43:51 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("pal")
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    std::cout << "Character Default Constructor called" << std::endl;
    return;
}

Character::Character(const std::string& type): _name(type)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;;
    // std::cout << "Character Parameterized Constructor called" << std::endl;
    return;
}

Character::Character(const Character& other)
{
    // std::cout << "Character Copy Constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    return;
}

Character &Character::operator=(const Character& other)
{
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; i++)
        {
            delete _inventory[i];
            _inventory[i] = NULL;
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
        }
    }
    // std::cout << "Character Copy Assignment Operator called" << std::endl;
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete (_inventory[i]);
        _inventory[i] = NULL;
    }
    // std::cout << "Character Destructor called" << std::endl;
    return;
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            return;
        }
    }
}

void	Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        _inventory[idx] = NULL;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (_inventory[idx] != NULL)
        _inventory[idx]->use(target);
}

