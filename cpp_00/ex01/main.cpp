/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:54:10 by lupan             #+#    #+#             */
/*   Updated: 2025/12/05 15:27:22 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	add_contact()
{
	Contact obj;

	obj.add(obj.getFirstName(), obj.getLastName(), obj.getNickname(), 
	obj.getPhoneNumber(), obj.getDarkestSecret());
}
int main()
{
    std::string	command;
	
	while (command != "3")
	{
		int res = command.compare("EXIT");
		if (res == 0)
			break;
		std::cout << "1. ADD | 2. SEARCH | 3. EXIT" << std::endl;
		getline(std::cin, command);
		if (command == "1" || command.compare("ADD") == 0)
		{
			std::cout << "hello world !" << std::endl;
			add_contact();
		}
		else if (command == "2" || command.compare("SEARCH") == 0)
		{
			std::cout << "hello 2 world !" << std::endl;
		}
	}
    return (0);
}