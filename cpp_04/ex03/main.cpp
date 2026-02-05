/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupan <lupan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:08:24 by luc               #+#    #+#             */
/*   Updated: 2026/02/05 17:18:05 by lupan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

int main()
{
    Character *cha;

    cha->getName();

    std::cout << "Type: " << cha->getName() << std::endl;
    return (0);
}
