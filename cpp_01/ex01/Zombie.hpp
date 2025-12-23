/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:19:43 by lupan             #+#    #+#             */
/*   Updated: 2025/12/23 14:50:57 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	
	public:
		Zombie();
		~Zombie();

		std::string	getName();
		void		setName(std::string name);
		void		announce();
	
	private:
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif