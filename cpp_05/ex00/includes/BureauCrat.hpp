/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:52:11 by lupan             #+#    #+#             */
/*   Updated: 2026/02/09 16:02:47 by lupan            ###   ########.fr       */
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

        std::string getName();
        std::string getGrade(size_t i);

    private:
        const std::string	_name;
        std::string			_grades[150];
};

#endif