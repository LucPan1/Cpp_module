/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:59:42 by luc               #+#    #+#             */
/*   Updated: 2025/12/18 16:55:47 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void	getLineProtected(std::string& buff) {
	
	if (!std::getline(std::cin, buff))
	{
		std::cout << std::endl;
		exit(0);
	}
}

bool	is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void	display_choice()
{
	std::cout << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "1. ADD | 2. SEARCH | 3. EXIT" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter a command: ";
}

void	display_column_info()
{
	std::cout << std::endl;
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Firstname";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Lastname";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Nickname";
	std::cout << "|";
}

void	check_empty(std::string &input, std::string name)
{
	std::size_t found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	while (input.empty() || found != std::string::npos) 
	{
		std::cout << "Re-enter " << name << ": ";
		getLineProtected(input);
		found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	}
}
