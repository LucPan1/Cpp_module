/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:39:57 by lupan             #+#    #+#             */
/*   Updated: 2026/01/09 00:45:55 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

    public:
        Fixed();
        Fixed(const int fixed_point_number);
        Fixed(const double fixed_point_number);
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed& other);
        ~Fixed();

        float	toFloat(void) const;
        int		toInt(void) const; 
    
    private:
        int					_fixed_point_number;
        static const int	_fractional_bits;
};

#endif