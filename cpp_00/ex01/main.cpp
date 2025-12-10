/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:54:10 by lupan             #+#    #+#             */
/*   Updated: 2025/12/10 17:20:39 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

// void	add_contact()
// {
// 	Contact obj;

// 	obj.add(obj.getFirstName(), obj.getLastName(), obj.getNickname(), 
// 	obj.getPhoneNumber(), obj.getDarkestSecret());
// }

int main()
{
    std::string	command;
	PhoneBook 	phone;
	int 		index;
	
	index = 0;
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
			phone.add_contact(index);
			index++;
		}
		else if (command == "2" || command.compare("SEARCH") == 0)
		{
			phone.search_contact(index);
		}
	}
    return (0);
}