/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:31:31 by lupan             #+#    #+#             */
/*   Updated: 2025/12/04 16:32:47 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
    
    public:
        Contact(void);
        ~Contact(void);

		std::string getFirstName( void ) const;
        std::string getLastName( void ) const;
        std::string getNickname( void ) const;
        std::string getPhoneNumber( void ) const;
        std::string getDarkestSecret( void ) const;

		void	setFirstName(std::string first_name);
		void	setLastName(std::string _last_name);
		void	setNickname(std::string nickname);
		void	setPhoneNumber(std::string phone_number);
		void	setDarkestSecret(std::string darkest_secret);

		void	add(std::string first_name, std::string last_name, std::string nickname,
				std::string phoneNumber, std::string darkest_secret);

    
    private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif