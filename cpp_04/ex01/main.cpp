/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:20 by lupan             #+#    #+#             */
/*   Updated: 2026/02/01 23:17:13 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Animal *obj[4];

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            obj[i] = new Cat();
        else 
            obj[i] = new Dog();
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Animal type: " << obj[i]->getType() << std::endl;
        obj[i]->makeSound();
        std::cout << std::endl;
    }

    for (int i = 0; i < 4; i++)
        delete obj[i];

    Dog *d = new Dog();
    d->setIdea(0, "This is a test");
    d->setIdea(1, "for Dog object");

    Dog *arr = new Dog(*d);
    std::cout << "The " << d->getType() << " idea: " << std::endl;
    d->getIdea();
    delete (d);

    std::cout << "The " << arr->getType() << " idea: " << std::endl;
    arr->getIdea();
    delete (arr);
    return (0);
}