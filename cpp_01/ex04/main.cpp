/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luc <luc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:42 by lupan             #+#    #+#             */
/*   Updated: 2026/01/01 17:52:02 by luc              ###   ########.fr       */
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
		size_t j = 0;
		size_t k = 0;
		size_t count = 0;
		std::fstream filein(av[1], std::ios::in);
	
		std::ofstream out_file("file.replace", std::ios::out);
		if (filein && out_file) {
			while (std::getline(filein, line)) {
				i = 0;
				j = 0;
				k = 0;
				count = 0;
				std::cout << "passe" << std::endl;
				while (i < line.length())
				{
					rep = line[i];
					cmp = s1[j];
					if (rep.compare(cmp) == 0)
					{
						line[i] = s2[k];
						out_file << line[i];
						std::cout << "line[" << i << "]" << line[i] << std::endl;
						i++;
						if (j != s1.length() - 1)
							j++;
						std::cout << "k: " << k << std::endl;
						if (k != s2.length() - 1)
							k++;
						std::cout << "k: " << k << std::endl;
						std::cout << "s2.length: " << s2.length() << std::endl;
						if (k == s2.length())
						{
							std::cout << "heeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee" << std::endl;
							std::cout << "k: " << k << " " << "s2: " << s2.length() << std::endl;
							while (j < s1.length())
							{
								j++;
								count++;
								std::cout << "j: " << j << std::endl;
							}
							i += count;
						}
						continue;
					}
					out_file << line[i];
					std::cout << "line[" << i << "]" << line[i] << std::endl;
					i++;
					if (i == line.length())
						out_file << std::endl;
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