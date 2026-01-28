/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:23:08 by lupan             #+#    #+#             */
/*   Updated: 2026/01/28 19:59:24 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& other);
        Animal &operator=(const Animal& other);
        virtual ~Animal();

        std::string	getType() const;
		
		void	makeSound();
		
    protected:
        std::string _type;

};

#endif