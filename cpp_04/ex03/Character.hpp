/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:17:33 by luc               #+#    #+#             */
/*   Updated: 2026/02/06 00:11:21 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

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

        void	equip(AMateria* m);
        void	unequip(int idx);
        void	use(int idx, ICharacter& target);

		std::string const & getName() const;
};

#endif