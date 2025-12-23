/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:39:35 by lupan             #+#    #+#             */
/*   Updated: 2025/12/23 14:49:10 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <memory>

class Zombie {
    
	public:
		Zombie(std::string name);
		~Zombie();

		void		announce(void);
	
	private:
		std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif