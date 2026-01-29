/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:52:56 by lupan             #+#    #+#             */
/*   Updated: 2026/01/29 16:31:08 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: public Animal {

    public:
        Cat();
		Cat(std::string type);
        Cat(const Cat& other);
        Cat &operator=(const Cat& other);
        ~Cat();

        void    makeSound() const;
        std::string getIdeas() const;

    private:
        Brain* idea;
};

#endif