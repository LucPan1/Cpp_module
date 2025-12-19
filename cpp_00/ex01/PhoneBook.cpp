/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:59:51 by lupan             #+#    #+#             */
/*   Updated: 2025/12/19 01:29:04 by luc              ###   ########.fr       */
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

void	PhoneBook::check_number(std::string input)
{
	while (input.empty() || !(is_number(input))) 
	{
		std::cout << "Re-enter phone number: "; 
		getLineProtected(input);
	}
}

void	PhoneBook::add_contact(int index)
{
	std::string input;
	
	std::cout << std::endl;
	while (true)
	{
		std::cout << "Firstname: ";
		getLineProtected(input);
		check_empty(input, "firstname");
		this->_contacts[index].setFirstName(input);
		std::cout << "Lastname: ";
		getLineProtected(input);
		check_empty(input, "lastname");
		this->_contacts[index].setLastName(input);
		std::cout << "Nickname: ";
		getLineProtected(input);
		check_empty(input, "nickname");
		this->_contacts[index].setNickname(input);
		std::cout << "Phone number: ";
		getLineProtected(input);
		check_number(input);
		this->_contacts[index].setPhoneNumber(input);
		std::cout << "darkest secret: ";
		getLineProtected(input);
		check_empty(input, "darkest secret");
		this->_contacts[index].setDarkestSecret(input);
		std::cout << std::endl;
		std::cout << "Contact added !" << std::endl;
		break;
	}
}

std::string& PhoneBook::truncate(std::string& str, size_t width) {
	
    if (str.length() > width) 
	{
		str.substr(0, 9);
		str.append(".");
		return str;
    }
    return str;
}

void	PhoneBook::display_infos(int i, std::string firstname, std::string lastname, std::string nickname)
{
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
}

void	PhoneBook::display_index(std::string &input_index)
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Enter contact index: ";
	
	getLineProtected(input_index);
	while (std::atoi(input_index.c_str()) > 7 || !(is_number(input_index)))
	{
		std::cout << std::endl;
		std::cout << "Invalid index, please try again: "; 
		getLineProtected(input_index);
	}
}

void	PhoneBook::search_contact(int index)
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string input_index;
	int			i = 0;
	
	display_column_info();
	while (i < index)
	{
		firstname = this->_contacts[i].getFirstName();
		lastname = this->_contacts[i].getLastName();
		nickname = this->_contacts[i].getNickname();
		display_infos(i, firstname, lastname, nickname);
		i++;
	}
	display_index(input_index);
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
