/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:39:57 by lupan             #+#    #+#             */
/*   Updated: 2026/01/07 16:50:57 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed& other);
        ~Fixed();

        float	toFloat(void) const;
        int		toInt(void) const; 
    
    private:
        static const int _fractional_bits;
}

#endif