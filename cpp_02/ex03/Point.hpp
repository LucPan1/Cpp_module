/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:09:16 by luc               #+#    #+#             */
/*   Updated: 2026/01/11 23:45:10 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point {

    public:
		Point();
		Point(const float fixed_point, const float fixed_point2);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();

	private:
		Fixed _x;
		Fixed _y;

};

#endif