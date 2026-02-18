/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/18 22:58:54 by luc              ###   ########.fr       */
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
        form = new Form("form", 75, 75);
        bureau = new BureauCrat("Paul", 75);
        bureau->signForm(*form);
        delete (form);
        delete (bureau);
        form = NULL;
        bureau = NULL;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl; 
    }

    try
    {
        form = new Form("form", 75, 75);
        bureau = new BureauCrat("John", 85);
        bureau->signForm(*form);
        delete (form);
        delete (bureau);
        form = NULL;
        bureau = NULL;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl; 
    }

    BureauCrat *first = NULL;
    BureauCrat *second = NULL;;
    try
    {
        form = new Form("form", 25, 25);
        first = new BureauCrat("John", 30);
        second = new BureauCrat("Matt", 25);
        second->signForm(*form);
        first->signForm(*form);
        delete (first);
        delete (second);
        delete (form);
        first = NULL;
        second = NULL;
		form = NULL;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl; 
    }
    return (0);
}