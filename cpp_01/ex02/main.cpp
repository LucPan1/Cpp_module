/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:58:28 by lupan             #+#    #+#             */
/*   Updated: 2025/12/23 15:16:46 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string zombie = "HI THIS IS BRAIN";

    std::string *stringPTR = &zombie;
    std::string const &stringREF = zombie;

    std::cout << "The memory address of the string variable: " << &zombie << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "The value of the string variable: " << zombie << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
    
    return (0);
}