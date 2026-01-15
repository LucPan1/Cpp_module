/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:53:40 by lupan             #+#    #+#             */
/*   Updated: 2026/01/16 00:03:48 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(): _fixed_point_number(0)
{
    std::cout << "Fixed Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed& other)
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
    std::cout << "Fixed Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_number;
}

void Fixed::setRawBits(int const raw) {
	this->_fixed_point_number = raw;
}
