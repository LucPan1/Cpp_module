/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/10 17:04:02 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

int main()
{
    try 
    {
        BureauCrat bureau;

        if (bureau.GradeTooHighException())
            throw std::exception();
        if (bureau.GradeTooLowException())
            throw std::exception();
        bureau.decrement();
        bureau.increment();
        std::cout << bureau.getName() << std::endl;
        std::cout << bureau.getGrade() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Catch error: " << e.what() << std::endl; 
    }
    return (0);
}