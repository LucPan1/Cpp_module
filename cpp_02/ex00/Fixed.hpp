/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:53:42 by lupan             #+#    #+#             */
/*   Updated: 2026/01/06 17:32:04 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed& other);
        ~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

    private:
        int				 	_fixed_point_number;
        static const int	_fractional_bits;
};

#endif