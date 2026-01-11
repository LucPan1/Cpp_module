/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:39:54 by lupan             #+#    #+#             */
/*   Updated: 2026/01/11 23:25:16 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(): _fixed_point_number(0)
{
    std::cout << "Fixed Default Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int fixed_point_number): _fixed_point_number(0)
{
    setRawBits(fixed_point_number << _fractional_bits);
    std::cout << "Fixed Int Constructor called" << std::endl;
    return;
}

Fixed::Fixed(const float fixed_point_number): _fixed_point_number(0)
{
    setRawBits((int)roundf(fixed_point_number * (1 << _fractional_bits)));
    std::cout << "Fixed Float Constructor called" << std::endl;
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
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_number;
}

void Fixed::setRawBits(int const raw) {
	this->_fixed_point_number = raw;
}

float Fixed::toFloat( void ) const {
    return (static_cast<float>(getRawBits()) / (1 << _fractional_bits));
}

int Fixed::toInt( void ) const {
	return getRawBits() >> _fractional_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
