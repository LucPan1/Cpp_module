/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:39:54 by lupan             #+#    #+#             */
/*   Updated: 2026/01/09 00:45:44 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(const int fixed_point_number): _fixed_point_number(0)
{
    (float)(fixed_point_number / 256);
    std::cout << "Fixed first Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const double fixed_point_number): _fixed_point_number(0)
{
    (Fixed)(fixed_point_number * (1 << _fractional_bits));
    std::cout << "Fixed second Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed& other): _fixed_point_number(other._fixed_point_number)
{
    std::cout << "Fixed Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Fixed Copy assignment operator called" << std::endl;
    if (this != &other) {
        // this->_fixed_point_number = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Fixed called" << std::endl;
    return;
}

float Fixed::toFloat( void ) const {
    return float(_fixed_point_number) / float(65536);
}

int Fixed::toInt( void ) const {
    
}