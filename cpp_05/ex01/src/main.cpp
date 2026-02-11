/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/11 15:10:35 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try 
    {
        BureauCrat bureau;
        Form form;

        if (form.GradeTooHighException())
            throw std::exception();
        if (form.GradeTooLowException())
            throw std::exception();
        std::cout << form << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch error: " << e.what() << std::endl; 
    }
    return (0);
}