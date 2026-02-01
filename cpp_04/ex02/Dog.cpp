/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:09 by lupan             #+#    #+#             */
/*   Updated: 2026/02/01 23:29:29 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain)
{
    std::cout << "Dog Default Constructor called" << std::endl;
    return;
}

Dog::Dog(std::string type): Animal(type)
{
    std::cout << "Dog Parameterized Constructor called" << std::endl;
    return;
}

Dog::Dog(const Dog& other): Animal(other), _brain(NULL)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    _brain = new Brain();
    *_brain = *(other._brain);
    return;
}

Dog &Dog::operator=(const Dog& other)
{
    if (this != &other) {
        Dog::operator=(other);
        this->_brain = new Brain(*other._brain);
    }
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
    return;
}

void	Dog::makeSound()
{
	std::cout << "The " << getType() << " is barking" << std::endl;
}

void	Dog::getIdea()
{
	for (int i = 0; i < 2; i++)
		std::cout << "Idea number " << i << " of the Dog is: " << this->_brain->getIdea(i) << std::endl;
}

void	Dog::setIdea(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}
