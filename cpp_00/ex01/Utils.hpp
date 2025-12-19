/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:59:46 by luc               #+#    #+#             */
/*   Updated: 2025/12/18 16:55:58 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
 # define UTILS_HPP

#include "PhoneBook.hpp"

void    getLineProtected(std::string& buff);
bool	is_number(const std::string& s);
void    display_choice();
void	display_column_info();
void	check_empty(std::string &input, std::string name);

#endif