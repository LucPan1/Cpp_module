/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:21:27 by lupan             #+#    #+#             */
/*   Updated: 2026/01/30 12:53:23 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* base = new Animal();
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    delete meta;
    meta = j;
    const Animal* i = new Cat();
    const Cat* a = new Cat();
    const Cat* m(a);
    const Cat* c;
    c = m;
    meta = j;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    base->makeSound();
    meta->makeSound();
    c->makeSound();
    
    delete base;
    delete meta;
    // delete j;
    delete i;
    // delete m;
    delete c;
    return (0);
}