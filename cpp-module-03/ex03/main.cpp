/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:41:50 by aalleon           #+#    #+#             */
/*   Updated: 2022/10/12 12:10:03 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
        DiamondTrap tom("Thomas");

        std::cout << tom << std::endl;
    }
    std::cout << std::endl;
    {
        DiamondTrap norb("Norbert");

        norb.attack("Jeremy");
        std::cout << norb << std::endl;
        norb.takeDamage(25);
        std::cout << norb << std::endl;
        norb.takeDamage(18);
        std::cout << norb << std::endl;
        norb.attack("Valerie");
        norb.attack("Cassie");
        norb.attack("Victor");
        norb.attack("Tristan");
        std::cout << norb << std::endl;
        norb.beRepaired(40);
        norb.whoAmI();
        std::cout << norb << std::endl;
        norb.attack("Killian");
        norb.highFivesGuys();
        norb.takeDamage(8);
        std::cout << norb << std::endl;
        norb.attack("Dominic");
        norb.highFivesGuys();
    }
    return (0);
}
