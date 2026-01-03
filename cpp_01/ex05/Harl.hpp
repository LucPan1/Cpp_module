/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:14:18 by luc               #+#    #+#             */
/*   Updated: 2026/01/03 23:22:09 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

    public:
		Harl();
		~Harl();

		void	complain(std::string level);
	
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

};

#endif