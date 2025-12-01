/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:01:25 by lupan             #+#    #+#             */
/*   Updated: 2025/12/01 18:34:19 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include <cstdlib>

class PhoneBook {
    
    public:
        PhoneBook( void );
        ~PhoneBook( void );

        int getFirstName( void ) const;
        int getLastName( void ) const;
        int getNickname( void ) const;
        int getPhoneNumber( void ) const;
        int getDarkestSecret( void ) const;
        void    add_contact(std::string first_name, std::string last_name, std::string nickname, 
            std::string phone_number, std::string darkest_secret);

    private:
        Contact _contacts[8];
        int		_index;
};

#endif