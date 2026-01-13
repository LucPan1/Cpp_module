/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:06:40 by luc               #+#    #+#             */
/*   Updated: 2026/01/14 00:16:36 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	test_bsp(const char *label, const Point& a, const Point& b, const Point& c, const Point& p)
{
	std::cout << ": " << std::endl;

	if (bsp(a, b, c, p))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
}

int main()
{
	const Point a(0.0f, 0.0f);
	const Point b(0.0f, 3.0f);
	const Point c(4.0f, 0.0f);

	const Point inside(1.0f, 1.0f);
	const Point outside(1.0f, 1.0f);
	const Point edge(1.0f, 1.5f);
	const Point vertex(0.0f, 0.0f);

	test_bsp("Inside: ", a, b, c, inside);
	test_bsp("Outside: ", a, b, c, outside);
	test_bsp("Edge: ", a, b, c, edge);
	test_bsp("Vertex: ", a, b, c, vertex);
	return (0);
}