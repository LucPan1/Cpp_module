/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:29:59 by lupan             #+#    #+#             */
/*   Updated: 2026/02/13 15:16:12 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("fizz"), _is_signed(false), _grades_sign(75), _grades_exec(75)
{
    std::cout << "Form Default Constructor called" << std::endl;
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
    std::cout << "Form Destructor called" << std::endl;
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

bool	Form::beSigned(BureauCrat grade)
{
    if (grade.getGrade() > 150)
        throw Form::GradeTooLowException();
    else if (grade.getGrade() < 1)
        throw Form::GradeTooHighException();
	else if (grade.getGrade() < this->_grades_sign && grade.getGrade() < this->_grades_exec)
    {
		this->_is_signed = true;
        return (true);
    }
	return (false);
}

bool	Form::signForm(BureauCrat &bureau, Form form)
{
	if (Form::beSigned(bureau))
		std::cout << bureau << " signed " << form << std::endl;
	else
		std::cout << bureau << " couldn't sign " << form << " because the grade is not high enough" << std::endl;
	return (0);
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << form.getName() << " signed " << form.getSigned() << ", required sign is " << form.getGradesSign() << " and the grade execute is " << form.getGradesExec();
    return (out);
}
