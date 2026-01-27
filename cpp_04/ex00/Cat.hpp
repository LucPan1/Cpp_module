/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:38:53 by lupan             #+#    #+#             */
/*   Updated: 2026/01/27 16:05:13 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat: public Animal {

    public:
        Cat();
		Cat(std::string type);
        Cat(const Cat& other);
        Cat &operator=(const Cat& other);
        ~Cat();
};

#endif