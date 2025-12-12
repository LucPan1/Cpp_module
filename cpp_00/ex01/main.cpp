/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:54:10 by lupan             #+#    #+#             */
/*   Updated: 2025/12/12 17:16:27 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

// getLineProtected(input);

// void getLineProtected(std::string& buff) {
// 	std::getline(std::cin, buff);
// }

int main()
{
    std::string	command;
	PhoneBook 	phone;
	int 		index;
	int			i;
	
	index = 0;
	i = 0;
	while (command != "3")
	{
		int res = command.compare("EXIT");
		if (res == 0)
			break;
		std::cout << std::endl;
		std::cout << "=============================" << std::endl;
		std::cout << "1. ADD | 2. SEARCH | 3. EXIT" << std::endl;
		std::cout << "=============================" << std::endl;
		std::cout << std::endl;
		std::cout << "Enter a command: ";
		getline(std::cin, command);
		if (command == "1" || command.compare("ADD") == 0)
		{
			if (index == 8 && i == 8)
				i = 0;
			else if (index != 8)
				index++;
			phone.add_contact(i);
			i++;
		}
		else if (command == "2" || command.compare("SEARCH") == 0)
		{
			phone.search_contact(index);
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Invalid command" << std::endl;
		}
	}
    return (0);
}
