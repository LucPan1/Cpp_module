/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:39:16 by lupan             #+#    #+#             */
/*   Updated: 2026/02/06 23:49:38 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    // std::cout << "MateriaSource Default Constructor called" << std::endl;
    return;
}

MateriaSource::MateriaSource(const MateriaSource& other): IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    // std::cout << "MateriaSource Copy Constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    return;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other) {
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    // std::cout << "MateriaSource Copy Assignment Operator called" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete (_inventory[i]);
    }
    // std::cout << "MateriaSource Destructor called" << std::endl;
    return;
}

void		MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m->clone();
            delete (m);
            return;
        }
    }
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
        {
            if (type == _inventory[i]->getType())
            {
                return (_inventory[i]->clone());
            }
        }
    }
    return (NULL);
}

