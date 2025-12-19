/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:34:01 by lupan             #+#    #+#             */
/*   Updated: 2025/12/19 12:35:52 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : _first_name(), _last_name(), _nickname(), _phone_number(), _darkest_secret()
{
    // std::cout << "Contact Constructor called" << std::endl;
    return;
}

Contact::~Contact( void )
{
    // std::cout << "Contact Destructor called" << std::endl;
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
    
    this->_last_name = last_name;
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
