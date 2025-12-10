/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:59:51 by lupan             #+#    #+#             */
/*   Updated: 2025/12/10 17:53:32 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
    std::cout << "PhoneBook Constructor called" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void )
{
    std::cout << "PhoneBook Destructor called" << std::endl;
    return;
}

bool	PhoneBook::is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void	PhoneBook::add_contact(int index)
{
	std::string input;
	
	std::cout << std::endl;
	while (true)
	{
		std::cout << "Firstname: ";
		getline(std::cin, input);
		while (input.empty()) 
		{
			std::cout << "Re-enter firstname: ";
			getline(std::cin, input);
		}
		this->_contacts[index].setFirstName(input);
		std::cout << "Lastname: ";
		getline(std::cin, input);
		while (input.empty()) 
		{
			std::cout << "Re-enter lastname: "; 
			getline(std::cin, input);
		}
		this->_contacts[index].setLastName(input);
		std::cout << "Nickname: ";
		getline(std::cin, input);
		while (input.empty()) 
		{
			std::cout << "Re-enter nickname: "; 
			getline(std::cin, input);
		}
		this->_contacts[index].setNickname(input);
		std::cout << "Phone number: ";
		getline(std::cin, input);
		while (input.empty() || !(is_number(input))) 
		{
			std::cout << "Re-enter phone number: "; 
			getline(std::cin, input);
		}
		this->_contacts[index].setPhoneNumber(input);
		std::cout << "darkest secret: ";
		getline(std::cin, input);
		while (input.empty()) 
		{
			std::cout << "Re-enter darkest_secret: "; 
			getline(std::cin, input);
		}
		this->_contacts[index].setDarkestSecret(input);
		std::cout << std::endl;
		std::cout << "Contact added !" << std::endl;
		break;
	}
}

void	PhoneBook::search_contact(int index)
{
	int	i = 0;

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
	while (i < index)
	{
		std::cout << std::endl;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << this->_contacts[i].getFirstName();
		std::cout << "|";
		std::cout << std::right << std::setw(10) << this->_contacts[i].getLastName();
		std::cout << "|";
		std::cout << std::right << std::setw(10) << this->_contacts[i].getNickname();
		std::cout << "|";
		i++;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Enter contact index: ";
	
	std::string	input_index;
	
	getline(std::cin, input_index);
	std::cout << std::endl;
	std::cout << "Firstname: ";
	std::cout << this->_contacts[atoi(input_index.c_str())].getFirstName() << std::endl;
	std::cout << "Lastname: ";
	std::cout << this->_contacts[atoi(input_index.c_str())].getLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->_contacts[atoi(input_index.c_str())].getNickname() << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->_contacts[atoi(input_index.c_str())].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->_contacts[atoi(input_index.c_str())].getDarkestSecret() << std::endl;
}