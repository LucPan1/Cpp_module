/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:36:59 by luc               #+#    #+#             */
/*   Updated: 2026/02/01 17:24:06 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter Default Constructor called" << std::endl;
    return;
}

ICharacter::ICharacter(const ICharacter& other)
{
    std::cout << "ICharacter Copy Constructor called" << std::endl;
    *this = other;
    return;
}

ICharacter &ICharacter::operator=(const ICharacter& other)
{
    if (this != &other) {
        return (*this);
    }
    std::cout << "ICharacter Copy Assignment Operator called" << std::endl;
    return (*this);
}

ICharacter::~ICharacter()
{
    std::cout << "ICharacter Destructor called" << std::endl;
    return;
}