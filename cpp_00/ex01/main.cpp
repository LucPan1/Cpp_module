/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:54:10 by lupan             #+#    #+#             */
/*   Updated: 2025/12/19 12:39:08 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Utils.hpp"

int main()
{
    std::string	command;
	PhoneBook 	phone;
	int 		index;
	int			i;
	
	index = 0;
	i = 0;
	while (true)
	{
		display_choice();
		getLineProtected(command);
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
		else if (command == "3" || command.compare("EXIT") == 0)
			break;
		else
		{
			std::cout << std::endl;
			std::cout << "Invalid command, try again" << std::endl;
		}
	}
    return (0);
}
