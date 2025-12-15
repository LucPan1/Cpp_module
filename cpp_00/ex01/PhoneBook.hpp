/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:01:25 by lupan             #+#    #+#             */
/*   Updated: 2025/12/15 11:48:25 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cstddef> 

class PhoneBook {
    
    public:
        PhoneBook( void );
        ~PhoneBook( void );

        void			add_contact(int index);
        void			search_contact(int i);

        bool			is_number(const std::string& s);
        std::string&	truncate(std::string& str, size_t width);

    private:
        Contact _contacts[8];
};

#endif