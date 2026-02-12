/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/12 16:10:52 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try 
    {
        BureauCrat bureau;
        Form form;

        if (bureau.GradeTooHighException())
            throw std::exception();
        if (bureau.GradeTooLowException())
            throw std::exception();
        form.signForm(bureau, form);
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch error: " << e.what() << std::endl; 
    }
    return (0);
}