/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:59:51 by lupan             #+#    #+#             */
/*   Updated: 2025/12/14 22:12:42 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Utils.hpp"

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
		getLineProtected(input);
		std::size_t found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		while (input.empty() || found != std::string::npos) 
		{
			std::cout << "Re-enter firstname: ";
			getLineProtected(input);
			found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		}
		this->_contacts[index].setFirstName(input);
		std::cout << "Lastname: ";
		getLineProtected(input);
		found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		std::cout << input << std::endl;
		while (input.empty() || found != std::string::npos) 
		{
			std::cout << "Re-enter lastname: "; 
			getLineProtected(input);
			found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

		}
		this->_contacts[index].setLastName(input);
		std::cout << "Nickname: ";
		getLineProtected(input);
		found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		while (input.empty() || found != std::string::npos) 
		{
			std::cout << "Re-enter nickname: "; 
			getLineProtected(input);
			found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		}
		this->_contacts[index].setNickname(input);
		std::cout << "Phone number: ";
		getLineProtected(input);
		while (input.empty() || !(is_number(input))) 
		{
			std::cout << "Re-enter phone number: "; 
			getLineProtected(input);
		}
		this->_contacts[index].setPhoneNumber(input);
		std::cout << "darkest secret: ";
		getLineProtected(input);
		found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		while (input.empty() || found != std::string::npos) 
		{
			std::cout << "Re-enter darkest_secret: "; 
			getLineProtected(input);
			found = input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		}
		this->_contacts[index].setDarkestSecret(input);
		std::cout << std::endl;
		std::cout << "Contact added !" << std::endl;
		break;
	}
}

std::string& PhoneBook::truncate(std::string& str, size_t width) {
	
    if (str.length() > width) 
	{
		str.resize(width);
		return str.append(".");
    }
    return str;
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

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	
	while (i < index)
	{
		firstname = this->_contacts[i].getFirstName();
		lastname = this->_contacts[i].getLastName();
		nickname = this->_contacts[i].getNickname();
		std::cout << std::endl;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << truncate(firstname, 9);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << truncate(lastname, 9);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << truncate(nickname, 9);
		std::cout << "|";
		i++;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Enter contact index: ";
	
	std::string	input_index;
	
	getLineProtected(input_index);
	while (atoi(input_index.c_str()) > 7 || !(is_number(input_index)))
	{
		std::cout << std::endl;
		std::cout << "Invalid index, please try again: "; 
		getLineProtected(input_index);
	}
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