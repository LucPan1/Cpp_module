/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:08:07 by luc               #+#    #+#             */
/*   Updated: 2026/01/13 23:17:34 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
    std::cout << "Point Default Constructor called" << std::endl;
    return;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
    std::cout << "Point Constructor called" << std::endl;
    return;
}

Point::Point(const Point& other): _x(other._x), _y(other._y)
{
    std::cout << "Point Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Point &Point::operator=(const Point& other)
{
    // std::cout << "Fixed Copy assignment operator called" << std::endl;
    if (this == &other) {
        return (*this);
    }
    return (*this);
}

Point::~Point()
{
    std::cout << "Point Destructor called" << std::endl;
    return;
}

Fixed Point::getX() const
{
    return this->_x;
}

Fixed Point::getY() const
{
    return this->_y;
}


