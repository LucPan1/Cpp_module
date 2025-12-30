/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:42 by lupan             #+#    #+#             */
/*   Updated: 2025/12/30 15:39:46 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main()
{
	// std::fstream filein;
	// std::string *s1;
	// std::string *s2;
	std::string	line;
    // For writing text file
    // Creating ofstream & ifstream class object
	std::fstream filein("file", std::ios::in);

    std::ofstream out_file("file.replace", std::ios::out);
    if (filein && out_file) {

        while (std::getline(filein, line)) {
            out_file << line << std::endl;
        }
        std::cout << "Copy Finished \n";
    }
    else {
        // Something went wrong
        printf("Cannot read File");
    }
	return 0;
}