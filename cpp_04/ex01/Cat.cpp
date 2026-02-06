/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:52:46 by lupan             #+#    #+#             */
/*   Updated: 2026/02/07 00:29:45 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain)
{
    std::cout << "Cat Default Constructor called" << std::endl;
    return;
}

Cat::Cat(std::string type): Animal(type)
{
    std::cout << "Cat Parameterized Constructor called" << std::endl;
    return;
}

Cat::Cat(const Cat& other): Animal(other), _brain(NULL)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    _brain = new Brain();
    *_brain = *(other._brain);
    return;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        this->_brain = new Brain(*other._brain);
    }
    std::cout << "Cat Copy Assignment Operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
    return;
}

void	Cat::makeSound() const
{
	std::cout << "The " << getType() << " is meowing" << std::endl;
}

void	Cat::getIdea()
{
	for (int i = 0; i < 2; i++)
		std::cout << "Idea number " << i << " of the Cat is: " << this->_brain->getIdea(i) << std::endl;
}

void	Cat::setIdea(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}
