/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:52:11 by lupan             #+#    #+#             */
/*   Updated: 2026/02/10 16:54:29 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class BureauCrat {

    public:
        BureauCrat();
        BureauCrat(const BureauCrat& other);
        BureauCrat &operator=(const BureauCrat& other);
        ~BureauCrat();

        bool    GradeTooHighException();
        bool    GradeTooLowException();

        std::string	getName();
        int			getGrade();

        void    increment();
        void    decrement();

    private:
        const std::string	_name;
        int			        _grades;
};

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade);

#endif