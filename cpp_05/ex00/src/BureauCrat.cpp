/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:54:12 by lupan             #+#    #+#             */
/*   Updated: 2026/02/11 19:36:44 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(): _name("john"), _grades(1)
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
        return (*this);
    }
    // std::cout << "BureauCrat Copy Assignment Operator called" << std::endl;
    return (*this);
}

BureauCrat::~BureauCrat()
{
    std::cout << "BureauCrat Destructor called" << std::endl;
    return;
}

bool    BureauCrat::GradeTooHighException()
{
    if (this->_grades < 1)
        return (true);
    return (false);
}

bool    BureauCrat::GradeTooLowException()
{
    if (this->_grades > 150)
        return (true);
    return (false);
}

std::string BureauCrat::getName() const
{
    return (this->_name);
}

int BureauCrat::getGrade() const
{
    return (this->_grades);
}

void    BureauCrat::increment()
{
    this->_grades--;
    if (this->_grades < 1)
        throw std::exception();
}

void    BureauCrat::decrement()
{
    this->_grades++;
    if (this->_grades > 150)
        throw std::exception();
}

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade)
{
    out << grade.getName() << ", bureaucrat grade " << grade.getGrade();
    return (out);
}