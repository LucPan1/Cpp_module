/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:17:12 by lupan             #+#    #+#             */
/*   Updated: 2026/01/29 16:54:43 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

    public:
        Brain();
        Brain(const Brain& other);
        Brain &operator=(const Brain& other);
        ~Brain();
    
    private:
        std::string ideas[100];
};

#endif