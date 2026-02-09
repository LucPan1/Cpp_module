/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:54:12 by lupan             #+#    #+#             */
/*   Updated: 2026/02/09 16:05:00 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat()
{
    std::cout << "BureauCrat Default Constructor called" << std::endl;
    return;
}

BureauCrat::BureauCrat(const BureauCrat& other)
{
    // std::cout << "BureauCrat Copy Constructor called" << std::endl;
    *this = other;
    return;
}

BureauCrat &BureauCrat::operator=(const BureauCrat& other)
{
    if (this != &other) {
        // _type = other._type;
    }
    // std::cout << "BureauCrat Copy Assignment Operator called" << std::endl;
    return (*this);
}

BureauCrat::~BureauCrat()
{
    std::cout << "BureauCrat Destructor called" << std::endl;
    return;
}

std::string BureauCrat::getName()
{
    return (this->_name);
}

std::string BureauCrat::getGrade(size_t i)
{
    return this->_grades[i];
}