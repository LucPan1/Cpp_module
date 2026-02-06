/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:40:08 by lupan             #+#    #+#             */
/*   Updated: 2026/02/06 14:44:17 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE
# define MATERIA_SOURCE

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

    private:
        AMateria	*_inventory[4];

	public:
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

#endif