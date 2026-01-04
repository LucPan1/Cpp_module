/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:14:20 by luc               #+#    #+#             */
/*   Updated: 2026/01/04 22:38:08 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int main()
{
    Harl	comment;

	comment.complain("DEBUG");
	comment.complain("INFO");
	comment.complain("WARNING");
	comment.complain("ERROR");
    return (0);
}