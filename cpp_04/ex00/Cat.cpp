/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:38:36 by lupan             #+#    #+#             */
/*   Updated: 2026/01/28 20:01:38 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat Default Constructor called" << std::endl;
    return;
}

Cat::Cat(std::string type): Animal(type)
{
    std::cout << "Cat Parameterized Constructor called" << std::endl;
    return;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Cat Copy Assignment Operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    return;
}
