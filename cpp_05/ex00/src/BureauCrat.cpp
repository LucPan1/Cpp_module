/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:54:12 by lupan             #+#    #+#             */
/*   Updated: 2026/02/17 14:33:05 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(): _name("default"), _grades(1)
{
    std::cout << "BureauCrat Default Constructor called" << std::endl;
    return;
}

BureauCrat::BureauCrat(const std::string& name, int grade): _name(name), _grades(grade) 
{
    if (_grades < 1)
        throw GradeTooHighException();
    if (_grades > 150)
        throw GradeTooLowException();
    return;
}

BureauCrat::BureauCrat(const BureauCrat& other): _name(other._name), _grades(other._grades)
{
    if (_grades < 1)
        throw GradeTooHighException();
    if (_grades > 150)
        throw GradeTooLowException();
    // std::cout << "BureauCrat Copy Constructor called" << std::endl;
    return;
}

BureauCrat &BureauCrat::operator=(const BureauCrat& other)
{
    if (this != &other) {
        if (other._grades < 1)
            throw GradeTooHighException();
        if (other._grades > 150)
            throw GradeTooLowException();
        _grades = other._grades;
    }
    // std::cout << "BureauCrat Copy Assignment Operator called" << std::endl;
    return (*this);
}

BureauCrat::~BureauCrat()
{
    // std::cout << "BureauCrat Destructor called" << std::endl;
    return;
}

std::string BureauCrat::getName() const
{
    return (_name);
}

int BureauCrat::getGrade() const
{
    return (_grades);
}

void    BureauCrat::increment()
{
    if (_grades <= 1)
        throw GradeTooHighException();
    --_grades;
}

void    BureauCrat::decrement()
{
    if (_grades >= 150)
        throw GradeTooLowException();
    ++_grades;
}

const char* BureauCrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char* BureauCrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade)
{
    out << grade.getName() << ", bureaucrat grade " << grade.getGrade() << std::endl;
    return (out);
}