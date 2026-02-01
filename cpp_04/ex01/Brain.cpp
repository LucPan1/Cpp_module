/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:19:30 by lupan             #+#    #+#             */
/*   Updated: 2026/02/01 21:46:57 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
    return;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Brain &Brain::operator=(const Brain& other)
{
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    std::cout << "Brain Copy Assignment Operator called" << std::endl;
    return (*this);
}

std::string Brain::getIdea(size_t i) const
{
    return this->_ideas[i];
}

void Brain::setIdea(size_t i, std::string idea)
{
    this->_ideas[i] = idea;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
    return;
}
