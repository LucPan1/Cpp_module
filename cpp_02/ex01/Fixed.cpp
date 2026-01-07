/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:39:54 by lupan             #+#    #+#             */
/*   Updated: 2026/01/07 16:50:26 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(): _fixed_point_number(0)
{
    std::cout << "Fixed Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed& other): _Fixed_point_number(other._fixed_point_number)
{
    std::cout << "Fixed Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Fixed Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_fixed_point_number = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Fixed called" << std::endl;
    return;
}

float Fixed::toFloat( void ) const {

}

int Fixed::toInt( void ) const {
    
}