/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:15 by lupan             #+#    #+#             */
/*   Updated: 2026/02/01 22:54:26 by luc              ###   ########.fr       */
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

		void	getIdea();
        void	setIdea(size_t i, std::string idea);

        void    makeSound() const;

    private:
        Brain *_brain;
};

#endif