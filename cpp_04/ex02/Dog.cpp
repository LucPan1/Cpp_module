/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:09 by lupan             #+#    #+#             */
/*   Updated: 2026/01/31 17:59:38 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << "Dog Default Constructor called" << std::endl;
    return;
}

Dog::Dog(std::string type): Animal(type)
{
    std::cout << "Dog Parameterized Constructor called" << std::endl;
    return;
}

Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    idea = new Brain();
    *idea = *(other.idea);
    // memcpy(idea, other.idea, sizeof(Brain));
    return;
}

Dog &Dog::operator=(const Dog& other)
{
    if (this != &other) {
        Dog::operator=(other);
    }
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    // delete idea;
    std::cout << "Dog Destructor called" << std::endl;
    return;
}

void	Dog::makeSound()
{
	std::cout << "The " << getType() << " is barking" << std::endl;
}
