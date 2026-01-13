/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:06:40 by luc               #+#    #+#             */
/*   Updated: 2026/01/14 00:24:53 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	test_bsp(const char *label, const Point& a, const Point& b, const Point& c, const Point& p)
{
	std::cout << label << ": " << std::endl;

	if (bsp(a, b, c, p))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
}

int main()
{
	const Point a(-2.0f, 1.0f);
	const Point b(3.0f, 4.0f);
	const Point c(5.0f, -1.0f);

	const Point inside(2.0f, 2.0f);
	const Point outside(6.0f, 3.0f);
	const Point edge(0.5f, 2.5f);
	const Point vertex(3.0f, 4.0f);

	test_bsp("Inside ", a, b, c, inside);
	test_bsp("Outside ", a, b, c, outside);
	test_bsp("Edge ", a, b, c, edge);
	test_bsp("Vertex ", a, b, c, vertex);
	return (0);
}