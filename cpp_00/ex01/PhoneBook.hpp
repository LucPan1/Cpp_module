/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:01:25 by lupan             #+#    #+#             */
/*   Updated: 2025/12/19 01:14:49 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include "Utils.hpp"
#include <iostream> // output | input
#include <iomanip> // setw
#include <cstdlib> // atoi | exit
#include <string> // substr

class PhoneBook {
    
    public:
        PhoneBook( void );
        ~PhoneBook( void );

        void			add_contact(int index);
        void			search_contact(int i);

        void	        check_number(std::string input);
        std::string&	truncate(std::string& str, size_t width);
        void			display_infos(int i, std::string firstname, std::string lastname, std::string nickname);
		void			display_index(std::string& input_index);
		
    private:
        Contact _contacts[8];
};

#endif