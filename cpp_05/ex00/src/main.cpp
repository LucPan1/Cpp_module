/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:22:58 by lupan             #+#    #+#             */
/*   Updated: 2026/02/13 12:25:12 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

int main()
{
    try 
    {
        BureauCrat bureau;

        bureau.decrement();
        bureau.increment();
        std::cout << bureau << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "std::exception: " << e.what() << std::endl; 
    }
    return (0);
}