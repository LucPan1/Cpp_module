/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 22:30:33 by luc               #+#    #+#             */
/*   Updated: 2026/01/13 23:28:44 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point p1, Point p2, Point p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
	bool negative, positive;

	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, c, a);

	negative = (d1 < 0) || (d2 < 0) || (d3 < 0);
	positive = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(negative && positive) && !(d1 == 0 || d2 == 0 || d3 == 0);
}