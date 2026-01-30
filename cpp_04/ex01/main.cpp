/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:20 by lupan             #+#    #+#             */
/*   Updated: 2026/01/30 16:26:46 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    const Animal *obj[2];

    obj[0] = new Dog();
    obj[1] = new Cat();

    const Animal* j = obj[0];
    const Animal* i = obj[1];
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // for (int it = 0; it < 2; it++)
    // {
    //     delete obj[] i;
    //     delete obj[] j;
    // }
    // delete j;
    // delete i;
    return (0);
}