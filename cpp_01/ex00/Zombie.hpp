/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:39:35 by lupan             #+#    #+#             */
/*   Updated: 2025/12/21 23:26:32 by luc              ###   ########.fr       */
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

		std::string	getZombie();
		void		randomChump(std::string name);
		Zombie*		newZombie(std::string name);
		void		announce(void);
	
	private:
		std::string _name;
};

#endif