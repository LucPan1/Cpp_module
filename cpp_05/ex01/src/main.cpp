/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/11 19:30:24 by luc              ###   ########.fr       */
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
        form.signForm(bureau, form);
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch error: " << e.what() << std::endl; 
    }
    return (0);
}