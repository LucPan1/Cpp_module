/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:20 by lupan             #+#    #+#             */
/*   Updated: 2026/01/31 18:07:55 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Animal **obj = new Animal*[2];
    obj[0] = new Dog();
    obj[1] = new Cat();

    Animal* j = obj[0];
    Animal* i = obj[1];
    j->makeSound();
    i->makeSound();
    for (int it = 0; it < 2; it++)
    {
        delete obj[it];
    }
    delete [] obj;
    return (0);
}