/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:06:40 by luc               #+#    #+#             */
/*   Updated: 2026/01/13 23:57:06 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	test_bsp(const Point& a, const Point& b, const Point& c, const Point& p)
{
	std::cout << "The point x = " << p.getX() << ", y = " << p.getY() << " is inside the triangle" << std::endl
			  << "a: x = " << a.getX() << ", y = " << a.getY() << std::endl
			  << "b: x = " << b.getX() << ", y = " << b.getY() << std::endl
			  << "c: x = " << c.getX() << ", y = " << c.getY() << std::endl;

	if (bsp(a, b, c, p))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
}

int main()
{
	test_bsp(Point(), Point(25, 0), Point(0, 25), Point(5, 5));
	std::cout << "\n--------------------------------------------------\n\n";
	test_bsp(Point(-32, -32), Point(-5, -5), Point(3.5, 3.5), Point(-9.5, 8.5));
	return (0);
}