/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/17 14:36:11 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

int main()
{
    BureauCrat *bureau = NULL;
    BureauCrat *copy = NULL;
    try 
    {
        bureau = new BureauCrat("John", 75);
        std::cout << *bureau;
        delete (bureau);
        bureau = NULL;
    }
    catch (std::exception & e)
    {
        std::cerr << "std::exception: " << e.what() << std::endl; 
    }

    try 
    {
        bureau = new BureauCrat("Matt", 0);
        std::cout << *bureau;
        delete (bureau);
        bureau = NULL;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl; 
    }

    try 
    {
        bureau = new BureauCrat("Matt", 150);
        std::cout << *bureau;
        bureau->decrement();
        std::cout << *bureau;
        delete (bureau);
        bureau = NULL;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl; 
    }

    std::cout << std::endl;
    std::cout << "Test copy constructor" << std::endl;
    try 
    {
        bureau = new BureauCrat("paul", 100);
        std::cout << "bureau " << *bureau;
        copy = new BureauCrat(*bureau);
        std::cout << "copy " << *copy;

        copy->increment();
        std::cout << "bureau " << *bureau;
        std::cout << "copy " << *copy;

        delete (bureau);
        delete (copy);
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl; 
    }

    std::cout << std::endl;
    std::cout << "Test assignment operator" << std::endl;
    try 
    {
        bureau = new BureauCrat("sam", 100);
        copy = new BureauCrat("dean", 125);
        std::cout << "before assignment " << *bureau << *copy << std::endl;

        *copy = *bureau;
        std::cout << "after assignment " << *bureau << *copy << std::endl;

        copy->decrement();
        std::cout << "after incrementing copy " << *bureau << *copy;

        delete (bureau);
        delete (copy);
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl; 
    }
    return (0);
}