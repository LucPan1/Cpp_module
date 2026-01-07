/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:42 by lupan             #+#    #+#             */
/*   Updated: 2026/01/07 12:30:42 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

int ft_replace(char **av)
{
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string	line;
	size_t 		i = 0;
	std::size_t	pos;
	std::fstream filein;
	std::ofstream out_file;

	filein.open(av[1], std::ios::in);
	if (filein.fail())
	{
		std::cout << "Error: " << av[1] << ":" <<
		" no such file or directory" << std::endl;
		return (1);
	}
	out_file.open((std::string(av[1]) + ".replace").c_str(), std::ios::out);
	if (out_file.fail())
		return (1);
	while (std::getline(filein, line)) {
		i = 0;
		while (i < line.length())
		{
			pos = line.find(s1);
			if (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
			out_file << line[i];
			i++;
			if (i == line.length() && filein.peek() != EOF)
				out_file << std::endl;
		}
	}
	out_file.close();
	filein.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Wrong arguments output" << std::endl;
	else
		ft_replace(av);
	return (0);
}
