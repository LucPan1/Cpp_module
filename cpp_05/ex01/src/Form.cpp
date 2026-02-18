/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:29:59 by lupan             #+#    #+#             */
/*   Updated: 2026/02/18 22:32:46 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _is_signed(false), _grades_sign(150), _grades_exec(150)
{
    std::cout << "Form Default Constructor called" << std::endl;
    return;
}

Form::Form(const std::string name, int gradeSign, int gradeExecute): _name(name), _is_signed(false), _grades_sign(gradeSign), _grades_exec(gradeExecute)
{
    if (_grades_sign < 1 || _grades_exec < 1)
        throw GradeTooHighException();
    if (_grades_sign > 150 || _grades_exec > 150)
        throw GradeTooLowException();
    // std::cout << "Form Copy Constructor called" << std::endl;
    return;
}

Form::Form(const Form& other): _name(other._name), _is_signed(other._is_signed), _grades_sign(other._grades_sign), _grades_exec(other._grades_exec)
{
    // std::cout << "Form Copy Constructor called" << std::endl;
    return;
}

Form &Form::operator=(const Form& other)
{
    if (this != &other) {
        _is_signed = other._is_signed;
    }
    // std::cout << "Form Copy Assignment Operator called" << std::endl;
    return (*this);
}

Form::~Form()
{
    // std::cout << "Form Destructor called" << std::endl;
    return;
}

std::string	Form::getName() const
{
    return (this->_name);
}

bool	Form::getSigned() const
{
    return (this->_is_signed);
}

int		Form::getGradesSign() const
{
    return (this->_grades_sign);
}

int		Form::getGradesExec() const
{
    return (this->_grades_exec);
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

void	Form::beSigned(const BureauCrat &grade)
{
	if (grade.getGrade() <= _grades_sign)
		_is_signed = true;
	else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << form.getName() 
        << " is signed " << form.getSigned() 
        << ", required sign is " << form.getGradesSign() 
        << " and the grade execute is " << form.getGradesExec()
        << std::endl;
    return (out);
}
