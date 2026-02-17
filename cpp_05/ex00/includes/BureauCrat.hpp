/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:52:11 by lupan             #+#    #+#             */
/*   Updated: 2026/02/17 14:02:58 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class BureauCrat {

    public:
        BureauCrat();
        BureauCrat(const std::string& name, int grade);
        BureauCrat(const BureauCrat& other);
        BureauCrat &operator=(const BureauCrat& other);
        ~BureauCrat();

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw();
        };

        std::string	getName() const;
        int			getGrade() const;

        void    increment();
        void    decrement();

    private:
        const std::string	_name;
        int			        _grades;
};

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade);

#endif