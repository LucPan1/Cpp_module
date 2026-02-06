/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:40:08 by lupan             #+#    #+#             */
/*   Updated: 2026/02/06 22:43:36 by luc              ###   ########.fr       */
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
		MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource &operator=(const MateriaSource& other);
        ~MateriaSource();
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};

#endif