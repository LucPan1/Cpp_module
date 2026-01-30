/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:15 by lupan             #+#    #+#             */
/*   Updated: 2026/01/30 15:06:56 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal {

    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& other);
        Dog &operator=(const Dog& other);
        ~Dog();

        void    makeSound() const;

    private:
        Brain *idea;
};

#endif