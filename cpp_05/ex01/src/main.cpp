/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/18 12:52:12 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "BureauCrat.hpp"

int main()
{
    Form *form = NULL;
    BureauCrat *bureau = NULL;

    try
    {
        form = new Form("Samy", 75, 75);
        bureau = new BureauCrat("Paul", 75);
        form->beSigned(*bureau);
        std::cout << *form << *bureau;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch error: " << e.what() << std::endl; 
    }
    return (0);
}