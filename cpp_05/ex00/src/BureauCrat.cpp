/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:54:12 by lupan             #+#    #+#             */
/*   Updated: 2026/02/16 14:53:49 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(): _name("john"), _grades(1)
{
    std::cout << "BureauCrat Default Constructor called" << std::endl;
    return;
}

// BureauCrat::BureauCrat(const std::string& name, int grade): _name(name), _grades(grade) 
// {
//     return;
// }

BureauCrat::BureauCrat(const BureauCrat& other)
{
    // std::cout << "BureauCrat Copy Constructor called" << std::endl;
    *this = other;
    return;
}

BureauCrat &BureauCrat::operator=(const BureauCrat& other)
{
    if (this != &other) {
        _grades = other._grades;
    }
    // std::cout << "BureauCrat Copy Assignment Operator called" << std::endl;
    return (*this);
}

BureauCrat::~BureauCrat()
{
    std::cout << "BureauCrat Destructor called" << std::endl;
    return;
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
        throw GradeTooHighException();
}

void    BureauCrat::decrement()
{
    this->_grades++;
    if (this->_grades > 150)
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade)
{
    out << grade.getName() << ", bureaucrat grade " << grade.getGrade();
    return (out);
}