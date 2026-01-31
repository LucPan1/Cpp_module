/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:52:33 by lupan             #+#    #+#             */
/*   Updated: 2026/01/31 17:06:21 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cstring>

class Animal {
    
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& other);
        Animal &operator=(const Animal& other);
        virtual ~Animal();

        std::string	getType() const;
		
		virtual void	makeSound() = 0;
		
    protected:
        std::string _type;

};

#endif