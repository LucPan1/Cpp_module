/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:34:01 by lupan             #+#    #+#             */
/*   Updated: 2025/12/05 15:58:50 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Contact::~Contact( void )
{
    std::cout << "Destructor called" << std::endl;
    return;
}

std::string Contact::getFirstName( void ) const {
    
    return this->_first_name;
}

std::string Contact::getLastName( void ) const {
    
    return this->_last_name;
}

std::string Contact::getNickname( void ) const {
    
    return this->_nickname;
}

std::string Contact::getPhoneNumber( void ) const {
    
    return this->_phone_number;
}

std::string Contact::getDarkestSecret( void ) const {
    
    return this->_darkest_secret;
}

void	Contact::setFirstName(std::string first_name) {
    
    this->_first_name = first_name;
}

void	Contact::setLastName(std::string last_name) {
    
    this->_first_name = last_name;
}

void	Contact::setNickname(std::string nickname) {
    
    this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phone_number) {
    
    this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret) {
    
    this->_darkest_secret = darkest_secret;
}

void Contact::add(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret) {
					
				std::cout << std::endl;
                while (1)
                {
                    std::cout << "Firstname: ";
                    getline(std::cin, first_name);
                    if (first_name.empty()) // name.empty Ctrl-D // std::cin.eof() break for Ctrl-D // use getLine()
                        continue;
                    std::cout << "Lastname: ";
                    getline(std::cin, last_name);
                    if (last_name.empty())
                        continue;
                    std::cout << "Nickname: ";
                    getline(std::cin, nickname);
                    if (nickname.empty()) 
                        continue;
                    std::cout << "Phone number: ";
                    getline(std::cin, phone_number);
                    if (phone_number.empty())
                        continue;
                    std::cout << "darkest_secret: ";
                    getline(std::cin, darkest_secret);
                    if (darkest_secret.empty()) 
                        continue;
                }
}
