/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:17:33 by luc               #+#    #+#             */
/*   Updated: 2026/02/05 16:41:01 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter {

    private:
        AMateria	*_inventory[4];
        std::string	_name;

    public:
        Character();
        Character(std::string const &type);
        Character(const Character& other);
        Character &operator=(const Character& other);
        ~Character();

		std::string const & getName() const;
};

#endif