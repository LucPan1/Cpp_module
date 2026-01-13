/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 22:30:33 by luc               #+#    #+#             */
/*   Updated: 2026/01/11 23:06:36 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point p1, Point p2, Point p3)
{
	return p1.getX() - p3.getX();
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float d1 = (b - a)(point - a) - (b - a)(point - a);
    float d2 = (c - b)(point - b) - (c - b)(point - b);
    float d3 = (a - c)(point - c) - (a - c)(point - c);

	bool negative = d1 < 0 || d2 < 0 || d3 < 0;
	bool positive = d1 > 0 || d2 > 0 || d3 > 0;
	bool zero = d1 == 0 || d2 == 0 || d3 == 0;
	if (zero)
		return false;
    return !(negative && positive);
}