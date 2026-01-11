/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:08:07 by luc               #+#    #+#             */
/*   Updated: 2026/01/11 23:35:13 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
    std::cout << "Point Default Constructor called" << std::endl;
    return;
}

Point::Point(const float fixed_point, const float fixed_point2): _x(fixed_point), _y(fixed_point2)
{
    std::cout << "Point Constructor called" << std::endl;
    return;
}

Point::Point(const Point& other)
{
    std::cout << "Point Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Point &Point::operator=(const Point& other)
{
    // std::cout << "Fixed Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_x = other._x;
        this->_y = other._y;

    }
    return (*this);
}

Point::~Point()
{
    std::cout << "Point Destructor called" << std::endl;
    return;
}


