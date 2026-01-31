/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:19:30 by lupan             #+#    #+#             */
/*   Updated: 2026/01/29 16:22:44 by lupan            ###   ########.fr       */
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
    if (this == &other) {
        return (*this);
    }
    std::cout << "Brain Copy Assignment Operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
    return;
}
