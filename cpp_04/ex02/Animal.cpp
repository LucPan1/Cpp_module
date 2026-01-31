/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:52:22 by lupan             #+#    #+#             */
/*   Updated: 2026/01/31 17:06:01 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type()
{
    std::cout << "Animal Default Constructor called" << std::endl;
    return;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal Parameterized Constructor called" << std::endl;
    return;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Animal &Animal::operator=(const Animal& other)
{
    if (this != &other) {
        _type = other._type;
    }
    std::cout << "Animal Copy Assignment Operator called" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
    return;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound()
{
	std::cout << "Animal sound" << std::endl;
}