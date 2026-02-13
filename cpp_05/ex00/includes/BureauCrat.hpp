/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:52:11 by lupan             #+#    #+#             */
/*   Updated: 2026/02/13 12:17:28 by lupan            ###   ########.fr       */
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
        BureauCrat(const BureauCrat& other);
        BureauCrat &operator=(const BureauCrat& other);
        ~BureauCrat();

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
        int			getGrade() const;

        void    increment();
        void    decrement();

    private:
        const std::string	_name;
        int			        _grades;
};

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade);

#endif