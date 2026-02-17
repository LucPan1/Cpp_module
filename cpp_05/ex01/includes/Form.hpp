/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:30:01 by lupan             #+#    #+#             */
/*   Updated: 2026/02/17 15:15:41 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "BureauCrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class BureauCrat;

class Form {

    public:
        Form();
        Form(const std::string name, int gradeSign, int gradeExecute);
        Form(const Form& other);
        Form &operator=(const Form& other);
        ~Form();

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is inferior to 1";
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is superior to 150";
                }
        };

		std::string	getName() const;
		bool 		getSigned() const;
		int 		getGradesSign() const;
		int 		getGradesExec() const;

		void        beSigned(const BureauCrat &grade);

    private:
        const std::string	_name;
        bool				_is_signed;
        const int			_grades_sign;
        const int			_grades_exec;    
};

std::ostream &operator<<(std::ostream &out, const Form &form);


#endif