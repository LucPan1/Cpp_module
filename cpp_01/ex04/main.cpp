/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:42 by lupan             #+#    #+#             */
/*   Updated: 2026/01/01 00:27:41 by luc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Wrong arguments output" << std::endl;
	else
	{
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string	line;
		std::string rep;
		std::string cmp;
	
		size_t i = 0;
		std::fstream filein(av[1], std::ios::in);
	
		std::ofstream out_file("file.replace", std::ios::out);
		if (filein && out_file) {
			while (std::getline(filein, line)) {
				while (i < line.length())
				{
					rep = line[i];
					cmp = s1[0];
					if (rep.compare(cmp) == 0)
					{
						std::cout << "rep: " << rep << std::endl;
						std::cout << "cmp: " << cmp << std::endl;
						line[i] = s2[0];
						out_file << line[i];
						i++;
						continue; 
					}
					out_file << line[i];
					i++;
				}
			}
			
			std::cout << "Copy Finished \n";
		}
		else {
			std::cout << "Error cannot read File" << std::endl;
		}
		return 0;
	}
}