/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:17:12 by lupan             #+#    #+#             */
/*   Updated: 2026/02/01 23:24:29 by luc              ###   ########.fr       */
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

        std::string	getIdea(size_t i) const;
        void		setIdea(size_t i, std::string idea);
    
    private:
        std::string _ideas[100];
};

#endif