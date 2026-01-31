/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:52:46 by lupan             #+#    #+#             */
/*   Updated: 2026/01/30 21:32:48 by luc              ###   ########.fr       */
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

Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    // *this = other;
    idea = new Brain();
    *idea = *(other.idea);
    // memcpy(idea, other.idea, sizeof(Brain));
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
    // delete idea;
    std::cout << "Cat Destructor called" << std::endl;
    return;
}

void	Cat::makeSound() const
{
	std::cout << "The " << getType() << " is meowing" << std::endl;
}
