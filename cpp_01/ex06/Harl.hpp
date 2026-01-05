/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:26:39 by luc               #+#    #+#             */
/*   Updated: 2026/01/05 15:16:34 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

    public:
        Harl();
        ~Harl();
    
    	void	complain(std::string level);

    private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif



