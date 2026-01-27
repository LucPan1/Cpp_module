/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:31:29 by lupan             #+#    #+#             */
/*   Updated: 2026/01/27 16:05:05 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog: public Animal {

    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        Dog &operator=(const Dog& other);
        ~Dog();
};

#endif