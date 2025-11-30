/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:28:34 by lupan             #+#    #+#             */
/*   Updated: 2025/11/27 17:00:13 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int ac, char **av)
{
	std::string str = av[1];

	if (ac != 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (std::size_t i = 0; i < str.length(); i++)
			std::cout << static_cast<unsigned char>(std::toupper(str[i]));
		std::cout << std::endl;
	} 
	return (0);
}
