/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:32:19 by luc               #+#    #+#             */
/*   Updated: 2026/01/11 23:25:50 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    public:
        Fixed();
        Fixed(const int fixed_point_number);
        Fixed(const float fixed_point_number);
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed& other);
        ~Fixed();

        int		getRawBits(void) const;
		void	setRawBits(int const raw);

        float	toFloat(void) const;
        int		toInt(void) const;

		int operator>(const Fixed &fixed);
		int operator<(const Fixed &fixed);
		int operator>=(const Fixed &fixed);
		int operator<=(const Fixed &fixed);
		int operator==(const Fixed &fixed);
		int operator!=(const Fixed &fixed);

		float operator+(const Fixed &fixed);
		float operator-(const Fixed &fixed);
		float operator*(const Fixed &fixed);
		float operator/(const Fixed &fixed);

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(const Fixed &first, const Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);
	
    private:
        int					_fixed_point_number;
        static const int	_fractional_bits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif